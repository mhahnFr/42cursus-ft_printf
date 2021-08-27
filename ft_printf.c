#include "ft_printf.h"
#include "./delegate/printf_delegate.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	result;

	va_start(args, s);
	result = printf_delegate(&args, s);
	va_end(args);
	return (result);
}
