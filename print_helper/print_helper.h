#ifndef PRINT_HELPER_H
# define PRINT_HELPER_H

# include "../format/format.h"

/*
 * Prints the given unsigned number using the given base. Returns the amount of
 * printed characters.
 */
size_t	print_number_base(unsigned long i, char *base, size_t base_length);

#endif