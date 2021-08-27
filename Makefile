# The name of the library.
NAME	=	libftprintf.a

# All source files needed by this project.
SRC		=	ft_printf.c ./delegate/printf_delegate.c ./delegate/printer.c	\
			./format/format.c ./print/character.c ./print/string.c			\
			./print/pointer.c ./print/int.c ./print/uint.c ./print/hex.c	\
			./print_helper/number_base.c


# A macro to change the extension of the files.
OBJ		=	$(patsubst %.c,%.o,$(SRC))

# The path to the libft.
LIBFTD	=	../Libft/src/

# The libft archive file.
#LIBFTA	=	$(LIBFTD)libft.a

# The flags used to compile the C sources.
CFLAGS	=	-Wall -Werror -Wextra


# Compiles everything.
all: $(NAME)

# Links the compiled files to the library. $(LIBFTA)
$(NAME): $(OBJ) #$(LIBFTA)
	$(AR) -rcs $(NAME) $(OBJ)

# Compiles each file individually.
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Calls the makefile of the libft to take care of it.
.phony: $(LIBFTA)
$(LIBFTA):
	@make -C $(LIBFTD)

# Removes all temporary files.
.phony: clean
clean:
	- $(RM) $(OBJ)

# Removes all files created by this makefile.
.phony: fclean
fclean: clean
	- $(RM) $(NAME)
	- $(RM) a.out

# Deletes everything and compiles all files again.
re: fclean all

# !!! REMOVE ME BEFORE SUBMISSION !!!
test: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME)
