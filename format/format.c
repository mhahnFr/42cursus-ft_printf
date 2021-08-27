#include <stdlib.h>

#include "./format.h"

t_format	*create_format(const char *f)
{
	t_format	*format;

	format = format_new();
	if (format != NULL)
	{
		switch (*f)
		{
			case 'c':
				format->type = CHAR;
				break;

			case 's':
				format->type = STRING;
				break;

			case 'p':
				format->type = POINTER;
				break;

			case 'd':
				format->type = DECIMAL;
				break;

			case 'i':
				format->type = INT;
				break;

			case 'u':
				format->type = UINT;
				break;

			case 'x':
				format->type = HEX_LOWER;
				break;

			case 'X':
				format->type = HEX_UPPER;
				break;

			case '%':
				format->type = PERCENT;
				break;

			default:
				format->type = -1;
				break;
		}
		format->length = 1;
	}
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

void		format_delete(t_format *f)
{
	free(f);
}
