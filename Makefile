# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abastard <abastard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 11:17:38 by abastard          #+#    #+#              #
#    Updated: 2024/05/29 11:24:04 by abastard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprinttf.a

SRC =	ft_print.c	/
		ft_putchar_pf.c	/
		ft_putstr_pf.c	/
		ft_putnbr_pf.c	/
		ft_putint_pf.c	/
		ft_puthex_pf.c	/
		ft_putptr_pf.c	/
		ft_aux_pf.c	/

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re