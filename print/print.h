#ifndef PRINT_H
# define PRINT_H

# include <stdbool.h>

# include "printer.h"

size_t	print_character(t_format *f, char c);

size_t	print_string(t_format *f, char *str);

size_t	print_pointer(t_format *f, void *ptr);

size_t	print_int(t_format *f, long i);

size_t	print_unsigned_int(t_format *f, unsigned int i);

size_t	print_hex(t_format *f, int hex, bool uppercase);

#endif