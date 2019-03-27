# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/17 21:05:39 by elhampto          #+#    #+#              #
#    Updated: 2019/03/26 20:39:03 by elhampto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =  ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c\
ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c\
ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c\
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c\
ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c\
ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c\

OFI =  ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o\
ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o\
ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o\
ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o\
ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o\
ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o\
ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o\


CG = GCC

FLAGS = -Wall -Werror -Wextra

ALL: $(NAME)

$(NAME):
	$(CG) $(FLAGS) -c $(SRC) 
	@echo "\x1b[32mC files made into O files"
	ar rc $(NAME) $(OFI)
	@echo "\x1b[33mO files made into a library"
	ranlib $(NAME)
	@echo "\x1b[34mLIbrary is arcived"

clean:
	rm -f $(OFI)

fclean: clean
	rm -f $(NAME)

re: fclean ALL
.PHONY: ALL, clean, fclean, re