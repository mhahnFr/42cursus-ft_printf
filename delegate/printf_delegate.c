#include "./printf_delegate.h"
#include "./printer.h"

size_t	printf_delegate(va_list *args, const char *format)
{
	size_t		index;
	size_t		result;
	t_format	*f;

	result = 0;
	index = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			f = create_format(format + ++index);
			index += f->length;
			result += printer_print_argument(f, args);
			format_delete(f);
		}
		else
			result += printer_print_character(format[index++]);
	}
	return (result);
}
