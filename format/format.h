#ifndef FORMAT_H
# define FORMAT_H

# include <stddef.h>

typedef enum e_type
{
	INT,
	UINT,
	CHAR,
	STRING,
	POINTER,
	DECIMAL,
	HEX_UPPER,
	HEX_LOWER,
	PERCENT
}	t_format_type;

typedef struct s_format {
	size_t			length;
	t_format_type	type;
}	t_format;

t_format	*create_format(const char *format);

t_format	*format_new(void);

void		format_delete(t_format *f);

#endif