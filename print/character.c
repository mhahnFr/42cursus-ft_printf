#include <unistd.h>

#include "./print.h"

size_t	print_character(t_format *f, char c)
{
	f = NULL;
	return (write(1, &c, 1));
}
