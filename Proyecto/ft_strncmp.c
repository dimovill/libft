#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ind;

	ind = 0;
	while (s1[ind] != '\0' && s2[ind] != '\0' && ind < n)
	{
		if (s1[ind] != s2[ind])
			return (s1[ind] - s2[ind]);
		ind++;
	}
	if (ind != n)
		return (s1[ind] - s2[ind]);
	return (0);
}

int main (void)
{
	char s1[] = "abcde";
	char s2[] = "abcde";
	int caracteres;
	int resultadoft;
	int resultadorig;
	caracteres = 5;
	resultadoft = ft_strncmp(s1, s2, caracteres);
	resultadorig = strncmp(s1, s2, caracteres);

	printf("Resultado ft_strncmp:%d\n", ft_strncmp(s1, s2, caracteres));
	if(resultadoft == 0)
	{
		printf("Las cadenas son iguales para ft_strncmp\n");
	}
	else 
	{
	printf("Las cadenas son distintas para ft_strncmp\n\n");
	}		
	printf("Resultado strncmp:%d\n", strncmp(s1, s2, caracteres));	
		if(resultadorig == 0)
	{
		printf("Las cadenas son iguales para strncmp\n");
	}
	else 
	{
	printf("Las cadenas son distintas para strncmp\n");
	}		
	return(0);
}
