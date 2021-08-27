#include <stdbool.h>

#include "./printer.h"
#include "../print/print.h"

size_t	printer_print_character(char c)
{
	return (print_character(NULL, c));
}

size_t	printer_print_argument(t_format *f, va_list *argument)
{
	switch (f->type)
	{
		case CHAR:
			return (print_character(f, va_arg(*argument, int)));

		case STRING:
			return (print_string(f, va_arg(*argument, char*)));

		case POINTER:
			return (print_pointer(f, va_arg(*argument, void*)));

		case DECIMAL:
		case INT:
			return (print_int(f, va_arg(*argument, int)));

		case UINT:
			return (print_unsigned_int(f, va_arg(*argument, unsigned int)));

		case HEX_LOWER:
			return (print_hex(f, va_arg(*argument, int), false));

		case HEX_UPPER:
			return (print_hex(f, va_arg(*argument, int), true));

		case PERCENT:
			return (print_character(f, '%'));
	}
}
