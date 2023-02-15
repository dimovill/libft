#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stddef.h>"

unsigned int    cuentapalabras(char const *s, char c)
{
    unsigned int i;
    unsigned int cont;
    i = 0;
    cont = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        {
            if (s[i] != '\0')
                cont++;
        }
        while (s[i] && s[i] != c)
            i++;
    }
    return (cont);
}

size_t    ft_strlen(char *array)
{
    int    cont;

    cont = 0;
    while (array[cont] != '\0')
    {
        cont++;
    }
    return (cont);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    size_t contador;
    char *copia;

    if (s == NULL)
        return (NULL);
    if (start > ft_strlen(s))
    {
        if (!(copia = malloc(sizeof(char))))
            return (NULL);
        copia[0] = 0;
        return (copia);
    }
    if (!(copia = malloc((len + 1) * sizeof(char))))
        return (NULL);
    i = start;
    contador = 0;
    while (s[i] && contador < len)
    {
        copia[contador] = s[i];
        contador++;
        i++;
    }
    copia[contador] = '\0';
    return (copia);
}

char    **ft_split(char const *s, char c)
{
    char    **str;
    size_t    len;
    size_t    n;

    str = malloc(sizeof(char *) * (cuentapalabras (s, c) + 1));
    if (!str)
        return (0);
    n = 0;
    while (*s)
    {
        if (*s != c)
        {
            len = 0;
            while (*s && *s != c)
            {
                len++;
                s++;
            }
            str[n++] = ft_substr(s - len, 0, len);
        }
        else
        s++;
    }
    str[n] = 0;
    return (str);
}
int main(void)
{
    char *cadena;
    char c;

    
    printf("el numero de palabras es\n%s\n", ft_split("hola, adios, hasta luego", ','));
    return (0);
}
