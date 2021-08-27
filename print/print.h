#ifndef PRINT_H
# define PRINT_H

# include <stdbool.h>

# include "../delegate/printer.h"

/*
 * Prints a single character with the given format specifier. If the format
 * specifier is null, the character is simply printed. Returns the amount of
 * the printed characters.
 */
size_t	print_character(t_format *f, char c);

/*
 * Prints the given string using the given format specifier. Returns the amount
 * of printed characters.
 */
size_t	print_string(t_format *f, char *str);

/*
 * Print the given pointer as hexadecimal number, preceeded with '0x', using
 * the given format specifier. Returns the amount of printed characters.
 */
size_t	print_pointer(t_format *f, void *ptr);

/*
 * Prints the given decimal number using the given format specifier. Returns
 * the amount of printed characters.
 */
size_t	print_int(t_format *f, long i);

/*
 * Prints the given unsigned int as decimal using the given format specifier.
 * Returns the amount of printed characters.
 */
size_t	print_unsigned_int(t_format *f, unsigned int i);

/*
 * Prints the given integer as hexadecimal using the given format specifier.
 * Returns the amount of printed characters.
 */
size_t	print_hex(t_format *f, int hex, bool uppercase);

#endif