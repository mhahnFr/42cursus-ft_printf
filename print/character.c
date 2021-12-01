#include <unistd.h>

#include "./print.h"

size_t	print_character(__attribute__((unused)) t_format *f, char c)
{
	return (write(1, &c, 1));
}
