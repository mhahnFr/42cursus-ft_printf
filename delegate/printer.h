#ifndef PRINTER_H
# define PRINTER_H

# include <stddef.h>
# include <stdarg.h>

# include "../format/format.h"

/*
 * Prints the given argument. Returns the amount of printed characters.
 */
size_t	printer_print_argument(t_format *f, va_list *argument);

/*
 * Prints a single character.
 */
size_t	printer_print_character(char c);

#endif