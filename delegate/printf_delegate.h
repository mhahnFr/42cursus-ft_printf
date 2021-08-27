#ifndef PRINTF_DELEGATE_H
# define PRINTF_DELEGATE_H

# include <stddef.h>
# include <stdarg.h>

/*
 * Takes care of the format string and the arguments to print.
 */
size_t	printf_delegate(va_list *args, const char *format);

#endif