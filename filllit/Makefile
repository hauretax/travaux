# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hutricot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 15:13:34 by hutricot          #+#    #+#              #
#    Updated: 2018/12/03 11:02:59 by hutricot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CFLAGS = -Wall -Wextra -I ./

L = libft/libft.a

S = fillit.c \

M_ALL = make -C libft/

S_O = $(S:.c=.o)

all: $(NAME)

$(NAME) :  $(S_O)
	$(M_ALL)
	ar rc $(NAME) $(S_O) $(L)

clean :
	rm -f $(S_O)

fclean : clean
	rm -f $(NAME)

re : fclean all
