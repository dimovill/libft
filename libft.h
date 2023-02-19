/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:56:26 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/13 21:56:26 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**    ATOI
 * @brief The atoi() function converts an integer value from a string of
 *characters. The input string is a character string that may be turned
 *into a return type numeric value. The function stops reading the input
 *string when it encounters the first character that it does not consider 
 * part of a number.
 * @param str String to convert
 * @return An integrer
 */
int		ft_atoi(char *str);

/**			BZERO
 * @brief The ft_bzero() function writes n zeroed bytes to the string s.
 * If n is zero, ft_bzero() does nothing.
 * @param s String
 * @param n numbers of bytes must be zero.
 * @return Nothing
 */
void	ft_bzero(void *s, size_t n);

/**			CALLOC
 * @brief The calloc() function contiguously allocates enough space for count
 * objects that are size bytes of memory each and returns a pointer to the
 * allocated memory.  The allocated memory is filled with bytes of
 * value zero.
 * @param nmemb
 * @param size
 * @return a pointer to allocated memory
 */
void	*ft_calloc(unsigned int nmemb, unsigned int size);

/**								ISALNUM
 * @brief	Check that it is alphanumeric.
 * 
 * @param c Character to be checked.
 * 
 * @return True if the character is alphanumeric. Return 1.
 * @return False if the character is not alphanumeric. Return 0
 **/
int		ft_isalnum(int d);

/**			ISALPHA 
 * @brief The ft_isalpha function tests for any 
 * character for which isupper or islower is true. The function isalpha() 
 * is used to check that a character is an alphabet or not. This function
 *  is declared in “ctype.h” header file. It returns an integer value, if
 *  the argument is an alphabet otherwise, it returns zero.
 * @param c1 Character
 * @return Return 0 if c isn't Alphabetic
 * Return 1 if c is Alphabetic*/
int		ft_isalpha(int c);

/**			ISASCII
 * @brief The ft_isascii function tests for an ASCII character,
 * which is any charac-ter character between 0 and digital 127 
 * inclusive.
 * @param d Character
 * @return Return 0 (Non ASCII-False) 
 * 					Return 1 (ASCII- True)
 */
int		ft_isascii(int d);

/** 		ISDIGIT
 *  @brief The ft_isdigit function tests for a decimal
 *  digit character
 * @param d Character
 * @return Return 0 (Non decimal-False) Return 1 (Decimal- True)*/
int ft_isdigit(int d);

/**			ISPRINT
 * @brief The ft_isprint function tests for any printing character,
 * including space. ASCII DECIMAL 32 - 126
 * @param d Character
 * @return Return 0 (Non printable) 
 * 					Return 1 (Printable)
 */
int		ft_isprint(int d);

/**				ITOA
 * @brief The itoa() function coverts the integer n into a character
 * string. Must work with negative numbers.
 * @param n The integer that wil be converted to character string.
 * @return The string tha representing the integer. Null if memory reserve
 * fail
 */
char	*ft_itoa(int n);

/**				MEMCHR
 * @brief The memchr() function locates the first occurrence 
 * of c (converted to an unsigned char) in string s.
 * @param s A Pointer ta a String. 
 * @param c Character to locate
 * @param n Numbers of bytes to search c into s.
 * @return The memchr() function returns a pointer to the byte 
 * located, or NULL if no such byte exists within n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**				MEMCMP
 * @brief The memcmp() function compares byte string s1 against byte
 *  string s2. Both strings are assumed to be n bytes long.
 * @param s1 String 1, (memory)
 * @param s2 String 2 (memory)
 * @param n Number of bytes to compare
 * @return The memcmp() function returns zero if the two strings are 
 * identical, otherwise returns the difference between the
 * first two differing bytes(treated as unsigned char values, so that
 * `\200' is greater than `\0', for example).
 * Zero-length strings are always identical.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**				MEMCPY
 * @brief  The memcpy() function copies n bytes from memory area s2 to 
 * memory area s1. If s1 and s2 overlap, behavior is undefined. 
 * Applications in which s1 and s2 might overlap should use 
 * memmove(3) instead.
 * @param s1 String destiny (memory)
 * @param s2 String Source (memory)
 * @param n Number of byte to copy.
 * @return Pointer to string destiny.
 */
void	*ft_memcpy(void *s1, const void *s2, size_t n);

/**				MEMMOVE
 * @brief The memmove() function copies n bytes from string s2 to 
 * string s1.  The two strings may overlap; the copy is always 
 * done in a non-destructive manner.
 * @param s1 String destiny
 * @param s2 String source
 * @param n Number of bytes to copy
 * @return The String s1 copied with de characters of s2 n bytes.
 */
void	*ft_memmove(void *s1, const void *s2, size_t n);

/**				MEMSET
 * @brief The memset() function writes n bytes of value c (converted
 *  to an unsigned char) to the string s.
 * @param b Starting address of memory to be filled. String
 * @param c Character to write
 * @param len Number of bytes to write with character
 * @return String b with the chages.
 */
void	*ft_memset(void *b, int c, size_t len);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr_fd(char *s, int fd);

/**
 * @brief 
 * @param s 
 * @param c 
 * @return 
 */
char	**ft_split(char const *s, char c);

/**			STRCHR
 * @brief The strchr() function locates the FIRST occurrence of c
 * (converted to a		 char) in the string pointed to by s.  The 
 * terminating null character is considered to be part of the string;
 * therefore if c is `\0', the functions locate the terminating `\0'.
 * @param s A string
 * @param c Character we want to locate
 * @return a pointer to the located character.
 */
char	*ft_strchr(const char *s, int c);

/**				STRDUP
 * @brief The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to
     ENOMEM.
 * @param s String to be copied	
 * @return A pointer to the new string
 */
char	*ft_strdup(const char *s);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**				STRJOIN
 * @brief Rerserve memory with malloc and Join two strings.
 * @param s1 First string
 * @param s2 String to join to s1
 * @return Return null if reserve memory si failed. Return
 * a new string, that is the result to join s1 and s2
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**				STRLCAT
 * @brief  The ft_strlcat() function appends the NUL-terminated string src
 * to the end of dst.  It will append at most size - strlen(dst) - 1 bytes,
 * terminating the result.
 * @param dst String destiny
 * @param src String Source
 * @param size n Bytes to concatenate.
 * @return The ft_strlcat() functions return the total length of
 * the string they tried to create.For strlcat() that means the initial
 * length of dst plus the length of src.  While this may seem somewhat 
 * confusing it was done to make trunca-tion truncation detection simple.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**				STRLCPY
 * @brief The strlcpy() function copies up to size - 1 characters from the
 *  NUL-terminated string src to dst, NUL-terminating 
 * the result.
 * @param dst String destiny
 * @param src String source
 * @param dstsize Number -1 bytes copies.
 * @return The strlcpy() function return the total 
 * length of the string they tried to create. For strlcpy() that means
 * the length of src.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/**				STRLEN
 * @brief The ft_strlen function computes the length of the string array.
 * @param array 
 * @return  The ft_strlen function returns the number of characters that 
 * precede the terminating NUL character.
 */
size_t	ft_strlen(char *array);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**				STRNCMP
 * @brief The strcmp() and strncmp() functions lexicographically compare
 *  the null-terminated terminated strings s1 and s2.
 * The strncmp() function compares not more than n characters.  Because
 * strncmp() is designed for comparing strings rather than binary data,
 * characters that appear after a `\0' character are not compared.
 * @param s1 String 1
 * @param s2 String 2
 * @param n The number of characters to compare
 * @return The strcmp() and strncmp() return an integer greater than, equal
 *  to, or less than 0, according as the string s1 is greater than, equal to,
 *  or less than the string s2.  The comparison is done using unsigned
 *  characters, characters, so that `\200' is greater than `\0'.
 */
int		ft_strncmp(char *s1, char *s2, unsigned int n);

/**
 * @brief The strnstr() function locates the first occurrence of the
 *  null-termi-nated null-terminated string s2 in the string s1,
 * where not more than n characters are searched. Characters that appear
 *  after a `\0' character are not searched.
 * @param grande Big string tha must be looked.
 * @param pequeno  Small string will be searched in s
 * @param len Number of bytes fron s must be looked.
 * @return If find is an empty string, s is returned; if find occurs nowhere
 *  in s, NULL is returned; otherwise a pointer to the first character of the
 * first occurrence of s2 is returned
 */
char	*ft_strnstr(const char *grande, const char *pequeno, size_t len);

/**			STRRCHR
 * @brief The strrchr() function locates the LAST occurrence of c
 * (converted to a		 char) in the string pointed to by s.  The 
 * terminating null character is considered to be part of the string;
 * therefore if c is `\0', the functions locate the terminating `\0'.
 * @param s A string
 * @param c Character we want to locate
 * @return a pointer to the located character.
 */
char	*ft_strrchr(const char *s, int c);






















/**			TOUPPER
 * @brief The ft_toupper function converts a lower-case letter to the
 * corresponding upper-case letter.
 * Google: toupper function code mac
 * @param c Lowercase character
 * @return Return c converted in Uppercase.
 */
int		ft_toupper(int c);

/**			TOLOWER
 * @brief The ft_tolower function converts a upper-case letter to the
 * corresponding lower-case letter.
 * Google: tolower function code mac
 * @param c Uppercase character
 * @return Return c converted in Lowercase.
 */
int		ft_tolower(int d);















/**
 * @brief Reserves and Returns a specified substring from a string.
 * @param s The value to extract the substring from.
 * @param start The starting character position of the substring
 * @param len The number of characters in the substring.
If length is 0, the output is blank.
 * @return The substring. Null if the memory reserve fail.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);


/**
 * @brief Delete all string set in s1, since the begining and
 * since the end. The function stop when a character non 'set).
 * @param s1 The original string.
 * @param set Charaters that can be delete in s1
 * @return The result string with malloc reserve.
 * @return Null if reserve is fail.
 */
char	*ft_strtrim(char const *s1, char const *set);





#endif