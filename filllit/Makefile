# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hutricot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 15:13:34 by hutricot          #+#    #+#              #
#    Updated: 2018/12/11 16:10:43 by hutricot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC = ft_fillit.c \
	  ft_error.c \
	  ft_free.c \
	  ft_create.c \
	  ft_printer.c \
	  ft_resolv.c \
	  ft_goodline.c \
	  main.c

OBJ = $(SRC:.c=.o)

INC = fillit.h

all: $(NAME)
$(NAME) : $(INC) $(OBJ) $(SRC)
	make -C libft
	gcc $(FLAGS) -c $(SRC) -I$(INC)
	gcc $(FLAGS) -o $(NAME) $(OBJ) libft/libft.a

clean :
	rm -f $(OBJ)
	make clean -C libft

fclean : clean
	rm -f $(NAME) libft/libft.a

re : fclean all
