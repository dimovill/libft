#include <string.h>
#include <stdio.h>


unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size)
{
	int	idst;
	int	isrc;
	int dstorig;
	int srcorig;
	dstorig = ft_strlen(dst);
	srcorig = ft_strlen(src);
	idst = 0;
	isrc = 0;
	while (dst[idst] != '\0' && idst < size)
		idst++;
	while (src[isrc] != '\0' && (idst + isrc + 1) < size)
	{
		dst[idst + isrc] = src[isrc];
		isrc++;
	}
	if (idst < size)
		dst[idst + isrc] = '\0';
	return (dstorig + srcorig);
}
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *array)
{
	int	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}




//#if defined(LIBC_SCCS) && !defined(lint)
//static char *rcsid = "$OpenBSD: strlcat.c,v 1.2 1999/06/17 16:28:58 millert Exp $";
//#endif /* LIBC_SCCS and not lint */
//#ifndef lint
//static const char rcsid[] =
//  "$FreeBSD: src/lib/libc/string/strlcat.c,v 1.2.4.2 2001/07/09 23:30:06 obrien Exp $";
//#endif

#include <sys/types.h>
#include <string.h>
#include <stdio.h>

/*
 * Appends src to string dst of size siz (unlike strncat, siz is the
 * full size of dst, not space left).  At most siz-1 characters
 * will be copied.  Always NUL terminates (unless siz <= strlen(dst)).
 * Returns strlen(initial dst) + strlen(src); if retval >= siz,
 * truncation occurred.
 */
unsigned long strlcat(dst, src, siz)
    char *dst;
    const char *src;
    unsigned long siz;
{
    register char *d = dst;
    register const char *s = src;
    register unsigned long n = siz;
    unsigned long dlen;

    /* Find the end of dst and adjust bytes left but don't go past end */
    while (n-- != 0 && *d != '\0')
        d++;
    dlen = d - dst;
    n = siz - dlen;

    if (n == 0)
        return(dlen + strlen(s));
    while (*s != '\0') {
        if (n != 1) {
            *d++ = *s;
            n--;
        }
        s++;
    }
    *d = '\0';

    return(dlen + (s - src));    /* count does not include NUL */
}

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 50;
    char buffer[size];
    char buffer1[size];
    int ft;
	int lenfirst;
	int lenlast;
	lenfirst = strlen(first);
	lenlast = strlen(last);
	printf("\n\n\nLongitud First en Main: %d\nLongitud Last en Main: %d\nCaracteres a copiar:  %d\n", lenfirst, lenlast, size);
	puts(first);
	puts(last);
    strcpy(buffer1,first);
    strcpy(buffer,first);
	r = strlcat(buffer,last,size);
    ft = ft_strlcat(buffer1,last,size);

    printf("\nResultado copiar cadena -buffer-:%s      ", buffer);
    int lenbuffer = strlen(buffer);
	printf("longitud buffer: %d\n",lenbuffer);
	puts(buffer);
    printf("\nValue returned (r): %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

	printf("\nResultado copiar cadena -buffer1-:%s      ", buffer1);
	int lenbuffer1 = strlen(buffer1);
	printf("longitud buffer1: %d\n",lenbuffer1);
	puts(buffer1);
    printf("\nValor retornado (ft): %d\n",ft);
    if( ft > size )
        puts("Cadena rota");
    else
        puts("La cadena se ha copiado entera");
    return(0);
}
