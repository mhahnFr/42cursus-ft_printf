#include <unistd.h>

#include "./print.h"
#include "../print_helper/print_helper.h"

size_t	print_pointer(t_format *f, void *ptr)
{
	size_t	counter;

	f = NULL;
	counter = write(1, "0x", 2);
	counter += print_number_base((unsigned long) ptr, "0123456789abcdef", 16);
	return (counter);
}
