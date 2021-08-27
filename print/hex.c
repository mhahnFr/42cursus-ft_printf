#include "print.h"
#include "../print_helper/print_helper.h"

size_t	print_hex(t_format *f, int hex, bool uppercase)
{
	char	*base;

	f = NULL;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	return (print_number_base((unsigned int) hex, base, 16));
}
