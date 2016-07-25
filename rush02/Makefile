# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/24 22:02:25 by lmeyer            #+#    #+#              #
#    Updated: 2016/07/24 23:20:27 by lmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

CC = gcc

CFLAGS = -Wall -Wextra -Werror

DIR_SRC = ./srcs/

DIR_INC = includes

SOURCES =	ft_colles.c ft_colles_generate.c ft_import_stdin.c ft_print.c \
	  		ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcmp.c ft_strcpy.c \
			ft_strdup.c ft_strlen.c ft_strncpy.c ft_valid_input.c \
			ft_manipulate_lists.c main.c

OBJECTS = $(SOURCES:.c=.o)

INCLUDES = ft.h ft_list.h ft_rush.h

all : $(NAME)

$(NAME) : $(OBJECTS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)
	@rm -f $(OBJECTS)

$(OBJECTS) :
	@$(CC) $(CFLAGS) -c $(SOURCES:%.c=$(DIR_SRC)%.c) -I $(DIR_INC)

clean :
	@rm -f $(OBJECTS)

fclean : clean
	@rm -f $(NAME)

.PHONY : all clean fclean
