NAME = rush-02
CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC = main.c diccionary.c aux_fun.c chop_chop.c print_numbers.c print_special.c input_errors.c library.c
OBJS = ${SRC:.c=.o}

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

.PHONY: all clean fclean re
