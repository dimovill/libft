
# Creo la variable name, para no tener que nombrar cada vez el archivo a crear
#Es el que nos indica 42.
NAME = libft.a

#Son los archivos fuentes c que hemos creado.
FUNCIONES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lslast.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

#OBJS, serán la variable que incluya todos los objetos .o y se crean a partir 
# de SRCS
OBJS = $(SRCS:.c=.o)

#CFLAGS, seran los flags que nos obligan a meter al compilar.
CFLAGS = -Wall -Wextra - Werror

#Esta regla patrón nos dice que pase cree un .o a partir de un .c. Las $ son 
#variables automaticas de sustituyen los nombres destino y fuentes en cada 
#caso.
#El flag -MD lo que hace es crear unos archivos .d que se deben definir y 
#sirven para que nos coja tambien las dependencias de las .h que en esta
#regla patrón no está definida. Esto lo hizo un tal Tom Tromey porque no 
#estaba claro como hacerlo 
%.o : %.c 
	gcc -c -MD $(CFLAGS) $< -o $@

#Aqui definimos los archivos .d que hemos dicho anteriormente de Tom Tromey.
-include *.d

# Se pone el flag -f para que no salga error si no hay nada que limpiar.
clean:
	rm -f *.o libft.a *.d
	
all:

fclean:

re:


.PHONY: clean all fclean re
