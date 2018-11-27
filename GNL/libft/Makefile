# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hutricot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 18:46:03 by hutricot          #+#    #+#              #
#    Updated: 2018/11/27 13:28:16 by hutricot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -I ./

S =		ft_memset.c \
		ft_strjoin_f.c \
		ft_alocaftchr.c \
		ft_free.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strncpy.c \
		ft_strnstr.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strtrim_len.c \
		ft_cmpw.c \
		ft_strsplit.c \
		ft_print_tab.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_print_elem.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd_b.c \
		ft_lstsize.c \
		ft_lstmap.c 


S_O = $(S:.c=.o)


all: $(NAME)
$(NAME) : $(S_O) 
	ar rc $(NAME) $(S_O)

clean :
	rm -f $(S_O)

fclean : clean
	rm -f $(NAME)

re : fclean all
