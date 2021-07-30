# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/27 14:57:54 by epagne-m          #+#    #+#              #
#    Updated: 2020/02/18 23:21:02 by epagne-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_calloc.c \
	  ft_isprint.c ft_memcpy.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_strlcat.c \
	  ft_tolower.c ft_toupper.c ft_atoi.c ft_strdup.c ft_strchr.c ft_strrchr.c \
	  ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strncmp.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c

OBJ = $(subst .c,.o,$(SRC))

SRC_BONUS = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstadd_back.c 

OBJ_BONUS = $(subst .c,.o,$(SRC_BONUS))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: all
	gcc $(CFLAGS) -c $(SRC_BONUS) $(SRCS)
	ar rc $(NAME) $(OBJ_BONUS) $(OBJ) 
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus
