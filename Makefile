# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/27 15:45:47 by mramos-2          #+#    #+#              #
#    Updated: 2025/06/05 15:08:41 by mramos-2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
HEADER = ft_printf.h
SRCS = ft_printf.c functions/ft_putchar.c functions/ft_putstr.c functions/ft_putnbr.c functions/ft_putnbru.c functions/ft_nbrhex.c functions/ft_pointer.c functions/ft_strlen.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
all: $(NAME)
$(OBJS): $(HEADER)
$(NAME): $(OBJS)
	   $(AR) $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
