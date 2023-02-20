# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 00:26:53 by dimolina          #+#    #+#              #
#    Updated: 2023/02/21 00:30:18 by dimolina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# I create the variable name, so as not to have to name the file every time to create
# It is the one that tells us 42
NAME = libft.a

#CFLAGS, will be the flags that force us to put when compiling.
CFLAGS = -Wall -Wextra -Werror

CC = gcc

#They are the c source files that we have created into the subdirectory.
FUNCIONES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lslast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

#OBJS, they will be the variable that includes all the .o objects and they are created from \
from FUNCIONES
OBJS = $(FUNCIONES:.c=.o)

# The same but with bonus functions.
OBJSBONUS = $(BONUS:.c=.o)

HEADER = libft.h

#This is the option that execute when you type "make / Make all"
all: $(NAME)

#c\
Create the archive. The specified archive is always created if it did not exist, when you request an update. But a warning is issued unless you specify in advance that you expect to create it, by using this modifier.\
r\
Insert the files member... into archive (with replacement). This operation differs from q in that any previously existing members are deleted if their names match those being added.\
s\
Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive. You may use this modifier flag either with any operation, or alone. Running "ar s" on an archive is equivalent to running ranlib on it.
$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)

# The -f flag is set so that an error does not appear if there is nothing to clean. Delete all .o, .d and libft.a
clean:
	rm -rf $(OBJS)
	rm -rf $(OBJSBONUS)

#Delete program and .o
fclean: clean
	rm -f $(NAME)

#Delete program (libft.a) and .o. Then run de program again.
re: fclean all

#It will compile the bonus functions and create the library with ar.
bonus: $(OBJSBONUS) $(OBJS)
	ar -crs $(NAME) $(OBJSBONUS)

.PHONY: bonus clean all fclean re
