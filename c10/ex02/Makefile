# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/16 21:54:57 by jbarreir          #+#    #+#              #
#    Updated: 2025/12/16 22:06:30 by jbarreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

CC = cc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = -I includes
SRC = srcs/main.c \
	  srcs/ft_puterr.c \
	  srcs/ft_strlen.c \
	  srcs/ft_atoi.c \
	  srcs/ft_putstr.c
OBJ = $(SRC:.c=.o)
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: fclean all
