# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababa <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 11:42:33 by ababa             #+#    #+#              #
#    Updated: 2021/11/23 21:41:52 by ababa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME =libftprintf.a

FLAGS =-Wall -Werror -Wextra

C_FILES = ft_putchar.c ft_putstr.c ft_putnbr.c\
  		ft_putnbr_unsigned.c ft_printf.c\
		ft_putnbr_hexa_low.c ft_int_len.c\
		ft_hexa_len.c ft_putnbr_hexa_upp.c\
		ft_putaddress.c ft_putnbr_hexa_size_t.c\
		ft_unsigned_len.c

O_FILES=  $(C_FILES:.c=.o)

all: $(NAME)

$(NAME): $(O_FILES)

%.o: %.c
	$(CC) -c $(FLAGS) $<
	ar -rs	$(NAME) $@

re: fclean all

fclean: clean
	rm -f $(NAME)
clean:
	rm -f $(O_FILES)
