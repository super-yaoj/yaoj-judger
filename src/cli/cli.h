/** @file cli.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.23
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt */

#ifndef CLI_H
#define CLI_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "yaoj-judger"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "yaoj-judger"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "1.3.0"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * judger_arg;	/**< @brief specify which judger to use.  */
  char * judger_orig;	/**< @brief specify which judger to use original value given at command line.  */
  const char *judger_help; /**< @brief specify which judger to use help description.  */
  char * result_arg;	/**< @brief predict judgement result.  */
  char * result_orig;	/**< @brief predict judgement result original value given at command line.  */
  const char *result_help; /**< @brief predict judgement result help description.  */
  char * log_arg;	/**< @brief specify judger result file.  */
  char * log_orig;	/**< @brief specify judger result file original value given at command line.  */
  const char *log_help; /**< @brief specify judger result file help description.  */
  int log_color_flag;	/**< @brief whether display colorful log (default=off).  */
  const char *log_color_help; /**< @brief whether display colorful log help description.  */
  char * policy_arg;	/**< @brief specify policy name.  */
  char * policy_orig;	/**< @brief specify policy name original value given at command line.  */
  const char *policy_help; /**< @brief specify policy name help description.  */
  char * policy_dir_arg;	/**< @brief specify policy search directory, depend on 'policy' option (default='.').  */
  char * policy_dir_orig;	/**< @brief specify policy search directory, depend on 'policy' option original value given at command line.  */
  const char *policy_dir_help; /**< @brief specify policy search directory, depend on 'policy' option help description.  */
  int json_flag;	/**< @brief output judgement result to stdout in JSON format (default=off).  */
  const char *json_help; /**< @brief output judgement result to stdout in JSON format help description.  */
  int timeout_arg;	/**< @brief specify both time limits in milliseconds.  */
  char * timeout_orig;	/**< @brief specify both time limits in milliseconds original value given at command line.  */
  const char *timeout_help; /**< @brief specify both time limits in milliseconds help description.  */
  int realtime_arg;	/**< @brief specify the runtime limit in milliseconds.  */
  char * realtime_orig;	/**< @brief specify the runtime limit in milliseconds original value given at command line.  */
  const char *realtime_help; /**< @brief specify the runtime limit in milliseconds help description.  */
  int cputime_arg;	/**< @brief specify the cpu limit in milliseconds.  */
  char * cputime_orig;	/**< @brief specify the cpu limit in milliseconds original value given at command line.  */
  const char *cputime_help; /**< @brief specify the cpu limit in milliseconds help description.  */
  int memory_arg;	/**< @brief specify all three memory limits in MB.  */
  char * memory_orig;	/**< @brief specify all three memory limits in MB original value given at command line.  */
  const char *memory_help; /**< @brief specify all three memory limits in MB help description.  */
  int virtual_memory_arg;	/**< @brief specify the virtual memory limit in MB.  */
  char * virtual_memory_orig;	/**< @brief specify the virtual memory limit in MB original value given at command line.  */
  const char *virtual_memory_help; /**< @brief specify the virtual memory limit in MB help description.  */
  int real_memory_arg;	/**< @brief specify the actual memory limit in MB.  */
  char * real_memory_orig;	/**< @brief specify the actual memory limit in MB original value given at command line.  */
  const char *real_memory_help; /**< @brief specify the actual memory limit in MB help description.  */
  int stack_memory_arg;	/**< @brief specify the stack memory limit in MB.  */
  char * stack_memory_orig;	/**< @brief specify the stack memory limit in MB original value given at command line.  */
  const char *stack_memory_help; /**< @brief specify the stack memory limit in MB help description.  */
  int output_size_arg;	/**< @brief specify the output limit in MB.  */
  char * output_size_orig;	/**< @brief specify the output limit in MB original value given at command line.  */
  const char *output_size_help; /**< @brief specify the output limit in MB help description.  */
  int fileno_arg;	/**< @brief specify the maximum number of opened fd.  */
  char * fileno_orig;	/**< @brief specify the maximum number of opened fd original value given at command line.  */
  const char *fileno_help; /**< @brief specify the maximum number of opened fd help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int judger_given ;	/**< @brief Whether judger was given.  */
  unsigned int result_given ;	/**< @brief Whether result was given.  */
  unsigned int log_given ;	/**< @brief Whether log was given.  */
  unsigned int log_color_given ;	/**< @brief Whether log-color was given.  */
  unsigned int policy_given ;	/**< @brief Whether policy was given.  */
  unsigned int policy_dir_given ;	/**< @brief Whether policy-dir was given.  */
  unsigned int json_given ;	/**< @brief Whether json was given.  */
  unsigned int timeout_given ;	/**< @brief Whether timeout was given.  */
  unsigned int realtime_given ;	/**< @brief Whether realtime was given.  */
  unsigned int cputime_given ;	/**< @brief Whether cputime was given.  */
  unsigned int memory_given ;	/**< @brief Whether memory was given.  */
  unsigned int virtual_memory_given ;	/**< @brief Whether virtual-memory was given.  */
  unsigned int real_memory_given ;	/**< @brief Whether real-memory was given.  */
  unsigned int stack_memory_given ;	/**< @brief Whether stack-memory was given.  */
  unsigned int output_size_given ;	/**< @brief Whether output-size was given.  */
  unsigned int fileno_given ;	/**< @brief Whether fileno was given.  */

  char **inputs ; /**< @brief unnamed options (options without names) */
  unsigned inputs_num ; /**< @brief unnamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *gengetopt_args_info_detailed_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the detailed help (including hidden options and details)
 */
void cmdline_parser_print_detailed_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_judger_values[];  /**< @brief Possible values for judger. */
extern const char *cmdline_parser_result_values[];  /**< @brief Possible values for result. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CLI_H */
