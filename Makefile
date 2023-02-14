
# I create the variable name, so as not to have to name the file every time to create
# It is the one that tells us 42
NAME = libft.a

#They are the c source files that we have created into the subdirectory.
FUNCIONES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lslast.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

#OBJS, they will be the variable that includes all the .o objects and they are created from \
from FUNCIONES
OBJS = $(FUNCIONES:.c=.o)

# The same but with bonus functions.
OBJSBONUS = $(BONUS:.c=.o)

CC = gcc

#CFLAGS, will be the flags that force us to put when compiling.
CFLAGS = -Wall -Wextra - Werror

#This pattern rule tells us to pass create a .o from a .c. The $ are
#automatic variables replace the destination and source names in each
#case.
#What the -MD flag does is create some .d files that must be defined and
# They are used to take us also the dependencies of the .h that in this
#rule pattern is not defined. This was done by a certain Tom Tromey because he didn't
#it was clear how to do it
%.o : %.c 
	gcc -c -MD $(CFLAGS) $< -o $@

#Here we define the .d files that we mentioned above about Tom Tromey
-include *.d

# The -f flag is set so that an error does not appear if there is nothing to clean. Delete all .o, .d and libft.a
clean:
	rm -f *.o libft.a *.d

#Delete program and .o
fclean: clean
	rm -f $(NAME)
	
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
	
#Delete program (libft.a) and .o. Then run de program again.
re: fclean all

.PHONY: bonus clean all fclean re
