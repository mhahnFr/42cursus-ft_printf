#include <stdbool.h>

#include "./printer.h"
#include "../print/print.h"

size_t	printer_print_character(char c)
{
	return (print_character(NULL, c));
}

size_t	printer_print_argument(t_format *f, va_list *argument)
{
	if (f->type == CHAR)
		return (print_character(f, va_arg(*argument, int)));
	else if (f->type == STRING)
		return (print_string(f, va_arg(*argument, char *)));
	else if (f->type == POINTER)
		return (print_pointer(f, va_arg(*argument, void *)));
	else if (f->type == DECIMAL || f->type == INT)
		return (print_int(f, va_arg(*argument, int)));
	else if (f->type == UINT)
		return (print_unsigned_int(f, va_arg(*argument, unsigned int)));
	else if (f->type == HEX_LOWER)
		return (print_hex(f, va_arg(*argument, int), false));
	else if (f->type == HEX_UPPER)
		return (print_hex(f, va_arg(*argument, int), true));
	else if (f->type == PERCENT)
		return (print_character(f, '%'));
	return (0);
}
