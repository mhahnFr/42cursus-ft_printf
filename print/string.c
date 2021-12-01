#include <unistd.h>

#include "./print.h"

size_t	print_string(__attribute__((unused)) t_format *f, char *str)
{
	size_t	counter;

	counter = 0;
	if (str == NULL)
		str = "(null)";
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
	return (counter);
}
