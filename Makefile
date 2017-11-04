# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/21 18:09:06 by kpatel            #+#    #+#              #
#    Updated: 2017/10/12 19:30:59 by kpatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC	= ft_bzero.c\
	  ft_memalloc.c\
	  ft_memchr.c\
	  ft_memccpy.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memdel.c\
	  ft_memmove.c\
	  ft_memset.c\
	  ft_putchar.c\
	  ft_putchar_fd.c\
	  ft_putendl.c\
	  ft_putendl_fd.c\
	  ft_putnbr.c\
	  ft_putnbr_fd.c\
	  ft_putstr.c\
	  ft_putstr_fd.c\
	  ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isgraph.c\
	  ft_ishexnumber.c\
	  ft_islower.c\
	  ft_isprint.c\
	  ft_ispunct.c\
	  ft_isspace.c\
	  ft_isupper.c\
	  ft_atoi.c\
	  ft_itoa.c\
	  ft_lstnew.c\
	  ft_lstdelone.c\
	  ft_lstdel.c\
	  ft_lstadd.c\
	  ft_lstiter.c\
	  ft_lstmap.c\
	  ft_strcat.c\
	  ft_strchr.c\
	  ft_strclr.c\
	  ft_strcmp.c\
	  ft_strcpy.c\
	  ft_strdel.c\
	  ft_strdup.c\
	  ft_strequ.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strjoin.c\
	  ft_strlcat.c\
	  ft_strlen.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strncat.c\
	  ft_strncmp.c\
	  ft_strncpy.c\
	  ft_strnequ.c\
	  ft_strnew.c\
	  ft_strnstr.c\
	  ft_strrchr.c\
	  ft_strrev.c\
	  ft_strsplit.c\
	  ft_strstr.c\
	  ft_strsub.c\
	  ft_strtrim.c\
	  ft_toupper.c\
	  ft_tolower.c\

OBJ = $(SRC:.c=.o)

CC = gcc

AR = ar rc

RL = ranlib

HDR = /libft.h

DEL = rm -f

CFLAGS = -Wall -Werror -Wextra

$(NAME):
	@echo "\033[33m---Creating object files and libft.a file...---\033[0m"
	@$(CC) $(CFLAGS) -c $(SRC) -I $(HDR)
	@$(AR) $(NAME) $(OBJ)
	@$(RL) $(NAME)
	@echo "\033[33m---Object files created!---\033[0m"
	@echo "\033[33m---libft.a created!---\033[0m"

all: $(NAME)

clean:
	@echo "\033[31m---Removing *.o files...---\033[0m"
	@$(DEL) $(OBJ)
	@echo "\033[31m---*.o files removed!---\033[0m"

fclean: clean
	@echo "\033[31m---Removing libft.a file---\033[0m"
	@$(DEL) $(NAME)
	@echo "\033[31m---libft.a removed!---\033[0m"

re: fclean all
