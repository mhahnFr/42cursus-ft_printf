#include <unistd.h>

#include "./print.h"
#include "../print_helper/print_helper.h"

size_t	print_int(t_format *f, long i)
{
	size_t	counter;

	f = NULL;
	counter = 0;
	if (i < 0)
	{
		counter += write(1, "-", 1);
		i *= -1;
	}
	counter += print_number_base(i, "0123456789", 10);
	return (counter);
}
