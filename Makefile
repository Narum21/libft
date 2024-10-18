# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgodino <fgodino@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 23:09:57 by fgodino           #+#    #+#              #
#    Updated: 2024/10/15 18:01:23 by fgodino          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isalnum.c 

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all:	$(NAME)

.c.o:
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	chmod 700 $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 

