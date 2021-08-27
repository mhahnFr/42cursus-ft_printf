#include "./print.h"
#include "../print_helper/print_helper.h"

size_t	print_unsigned_int(t_format *f, unsigned int i)
{
	f = NULL;
	return (print_number_base(i, "0123456789", 10));
}
