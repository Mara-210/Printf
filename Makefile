# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mramos-r <mramos-r@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/18 16:09:53 by mramos-r          #+#    #+#              #
#    Updated: 2026/05/27 17:19:09 by mramos-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbru.c ft_nbrhex.c ft_pointer.c 
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
all: $(NAME)
$(NAME): $(OBJS)
	   $(AR) $(NAME) $(OBJS)
$%.o:%.c $(HEADER)
	$(CC) $(CFLAGS) -c %< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re