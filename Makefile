include var.mk
SUBDIRS=src tests
PROJECT_ROOT?=

.PHONY: $(SUBDIRS) clean kafel clean_all docs check check_buildenv

all: build

build: check_buildenv kafel $(SUBDIRS)
	$(info done.)

install:
ifeq (, $(shell which $(INSTALL) 2> /dev/null))
	$(error command $(INSTALL) not found, please install it)
endif
	$(INSTALL) $(PROJECT_ROOT)yaoj-judger /usr/bin/yaoj-judger

uninstall:
	$(RM) -rf /usr/bin/yaoj-judger

# https://www.gnu.org/software/make/manual/make.html#Overriding
# https://www.gnu.org/software/make/manual/make.html#Multiple-Targets
# $@: https://www.gnu.org/software/make/manual/make.html#Automatic-Variables
# $(VAR) is equivalent to ${VAR}
$(SUBDIRS):
	$(MAKE) -C $@ PROJECT_ROOT=../$(PROJECT_ROOT)

# kafel: build kafel/libkafel.a & kafel/libkafel.so
kafel:
	$(MAKE) -C kafel
#	cp kafel/lib* ./

clean:
	$(RM) libkafel.* *.local *.gcno *.gcda *.gcov yaoj-judger
	$(RM) -r local.cov
	@for dir in $(SUBDIRS); do \
		$(MAKE) clean -C $$dir PROJECT_ROOT=../$(PROJECT_ROOT); \
	done
	$(RM) yaoj-judger*.tar.gz

clean_all: clean
	$(MAKE) clean -C kafel 

check: test

test:
	$(MAKE) test -C tests PROJECT_ROOT=../$(PROJECT_ROOT)

gcovr:
	$(MAKE) clean
	$(MAKE) coverage GCOVR=true

# generate gcov files in local.cov dir
coverage: kafel
	$(MAKE) all -C src PROJECT_ROOT=../$(PROJECT_ROOT) MODE=coverage
	$(MAKE) test
	mkdir -p local.cov
	$(MAKE) cov -C src PROJECT_ROOT=../$(PROJECT_ROOT)

docs:
	doxygen; \
	sed -i 's/code.JavaDocCode/code.JavaDocCode{/g' docs/web/html/doxygen.css
# sed is for known bugs, which will be fixed in doxgen 1.9.4

src: kafel

# currently support x86_64
check_buildenv:
	$(info checking build environment...)
ifneq (x86_64,$(shell uname -m))
	$(error currently only support x86_64 architecture)
else ifeq (, $(shell which flex 2> /dev/null))
	$(error command flex not found, please install it)
else ifeq (, $(shell which ausyscall 2> /dev/null))
	$(error command ausyscall not found, please install it)
else ifeq (, $(shell which $(CC) 2> /dev/null))
	$(error command $(CC) not found, please install it)
else ifeq (, $(shell which gengetopt 2> /dev/null))
	$(error command gengetopt not found, please install it)
endif

githubasserts:
	$(MAKE) clean
	$(MAKE) build
	tar cvzf yaoj-judger-$$(git describe --tags).tar.gz yaoj-judger libyjudger.a