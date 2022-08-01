# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pshaw <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 20:48:11 by pshaw             #+#    #+#              #
#    Updated: 2022/07/25 14:51:40 by pshaw            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Makefile is a build system that allows multiple files to be compiled in mass at once, using structred shell command rules & without having  to write out every single file 

#Name = name of the program. CC = name of the compiler Cflags = compiler flags to use CFiles = .c files to complile Ofiles = change all .c   files into .o files

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strchr.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_memcmp.c \
	ft_memchr.c \
    ft_memset.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_bzero.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_tolower.c

OFILES = $(CFILES:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

OFILES_B = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
		ar rcs $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

bonus: $(OFILES) $(OFILES_B)
		ar -rcs $(NAME) $(OFILES) $(OFILES_B)

clean:
	-rm -f $(OFILES)
   	
fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

#ar command is to create, modify and extract the files from the archives (collection of files, in this case the OFiles
# -r is used to create archive & insert files in archieve.
