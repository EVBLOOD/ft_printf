# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 19:03:03 by sakllam           #+#    #+#              #
#    Updated: 2021/11/18 22:06:02 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = ft_printf.h
SRC =   ft_printf.c ft_putchar.c ft_puthexup.c\
		ft_putperc.c\
		ft_putstr.c\
		ft_search.c \
		ft_puthexl.c\
		ft_putnbr.c\
		ft_putptr.c\
		ft_putunbr.c\
		ft_strlen.c
SRC_OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(SRC:.c=.o) $(INCLUDE)
	gcc -c $(CFLAGS) $(SRC) -I $(INCLUDE)
	@ar -rc $(NAME) $(SRC_OBJ)
clean:
	rm -f $(SRC_OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
