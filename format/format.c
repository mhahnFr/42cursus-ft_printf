#include <stdlib.h>

#include "./format.h"

t_format	*create_format(const char *f)
{
	t_format	*format;

	format = format_new();
	if (format == NULL)
		return (NULL);
	if (*f == 'c')
		format->type = CHAR;
	else if (*f == 's')
		format->type = STRING;
	else if (*f == 'p')
		format->type = POINTER;
	else if (*f == 'd')
		format->type = DECIMAL;
	else if (*f == 'i')
		format->type = INT;
	else if (*f == 'u')
		format->type = UINT;
	else if (*f == 'x')
		format->type = HEX_LOWER;
	else if (*f == 'X')
		format->type = HEX_UPPER;
	else if (*f == '%')
		format->type = PERCENT;
	format->length = 1;
	return (format);
}

t_format	*format_new(void)
{
	t_format	*format;

	format = malloc(sizeof(t_format));
	if (format != NULL)
	{
		format->length = 0;
		format->type = -1;
	}
	return (format);
}

void	format_delete(t_format *f)
{
	free(f);
}
