#ifndef __BERRY_CONF_H
#define __BERRY_CONF_H

/* Macro: BE_SINGLE_FLOAT
 * Unused.
 **/
#define BE_DEBUG                        0

/* Macro: BE_SINGLE_FLOAT
 * Select floating point precision.
 * Use double-precision floating-point numbers when the value
 * is 0 (default), otherwise use single-precision floating-point
 * numbers.
 **/
#define BE_SINGLE_FLOAT                 1

/* Macro: BE_RUNTIME_DEBUG_INFO
 * Set runtime error debugging information.
 * 0: unable to output source file and line number at runtime.
 * 1: output source file and line number information at runtime
 **/
#define BE_RUNTIME_DEBUG_INFO           1

/* Macro: BE_STACK_TOTAL_MAX
 * Set the maximum total stack size.
 **/
#define BE_STACK_TOTAL_MAX              100

/* Macro: BE_STACK_FREE_MIN
 * Set the minimum free count of the stack. The stack idles will
 * be checked when a function is called, and the stack will be
 * expanded if the number of free is less than BE_STACK_FREE_MIN.
 **/
#define BE_STACK_FREE_MIN               10

#endif
