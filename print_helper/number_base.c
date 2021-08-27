#include <unistd.h>

#include "./print_helper.h"

size_t	print_number_base(unsigned long i, char *base, size_t base_length)
{
	char	c;
	size_t	counter;

	counter = 0;
	if (i > base_length - 1)
		counter += print_number_base(i / base_length, base, base_length);
	c = base[i % base_length];
	counter += write(1, &c, 1);
	return (counter);
}
