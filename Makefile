# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/22 14:53:04 by minsekim          #+#    #+#              #
#    Updated: 2020/12/25 12:58:04 by minsekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra -c
FILES	= ft_memset.c		\
		  ft_bzero.c 		\
		  ft_memcpy.c		\
		  ft_memccpy.c		\
		  ft_memmove.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_strlen.c		\
		  ft_strlcpy.c		\
		  ft_strlcat.c		\
		  ft_strchr.c		\
		  ft_strrchr.c		\
		  ft_strnstr.c		\
		  ft_strncmp.c		\
		  ft_atoi.c			\
		  ft_isalpha.c		\
		  ft_isdigit.c		\
		  ft_isalnum.c		\
		  ft_isprint.c		\
		  ft_toupper.c		\
		  ft_tolower.c		\
		  ft_isascii.c		\
		  ft_calloc.c		\
		  ft_strdup.c		\
		  ft_substr.c		\
		  ft_strjoin.c		\
		  ft_strtrim.c		\
		  ft_itoa.c			\
		  ft_strmapi.c		\
		  ft_putchar_fd.c	\
		  ft_putstr_fd.c	\
		  ft_putendl_fd.c	\
		  ft_putnbr_fd.c	\
		  ft_putchar.c		\
		  ft_putstr.c		\
		  ft_strequ.c		\
		  ft_split.c		\
		  ft_lstnew.c 		\
		  ft_lstadd_front.c	\
		  ft_lstsize.c		\
		  ft_lstlast.c		\
		  ft_lstadd_back_bonus.c	\
		  ft_lstdelone.c	\
		  ft_lstclear.c		\
		  ft_lstiter.c		\
		  ft_lstmap.c

OBJ		= $(subst .c,.o,$(FILES))

all		: $(NAME)

$(NAME)	:
	gcc $(CFLAGS) $(FILES) libft.h
	ar rcs $(NAME) $(OBJ)

clean	:
	rm -f $(OBJ)

fclean	: clean
	rm -f $(NAME)

re		: fclean all
