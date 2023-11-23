# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 18:20:16 by bamsyah           #+#    #+#              #
#    Updated: 2023/11/23 19:07:05 by bamsyah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror #g3 fsanitizee=address

SRC = Utils/ft_atoi.c Utils/ft_itoa.c  Utils/ft_putstr_fd.c  Utils/ft_split.c \
	Utils/ft_strjoin.c Utils/ft_strlen.c  Utils/ft_strncmp.c  Utils/ft_strtrim.c \
	Utils/ft_strchr.c Utils/ft_strdup.c Utils/ft_substr.c push_swap.c \
	Utils/ft_putchar_fd.c Utils/ft_bzero.c Utils/ft_calloc.c Utils/ft_strlcat.c \
	Utils/ft_strlcpy.c ft_printf/ft_printf.c ft_printf/ft_putbase.c \
	ft_printf/ft_putchar_len.c ft_printf/ft_putnbr_len.c ft_printf/ft_putunbr_len.c \
	ft_printf/ft_putstr_len.c parsing_swap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all