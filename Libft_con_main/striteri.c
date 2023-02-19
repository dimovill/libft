#include <stddef.h>

size_t	ft_strlen(char *array)
{
	size_t	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
#include <stdio.h>

void print_indexed_chars(unsigned int i, char* c) {
  printf("Char at index %d: %c\n", i, *c);
}

int main() {
  char str[] = "Hello, world!";
  printf("Original string: %s\n", str);
  ft_striteri(str, &print_indexed_chars);
  printf("Modified string: %s\n", str);
  return 0;
}

