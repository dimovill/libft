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
#define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**			ISALPHA 
 * @brief The ft_isalpha function tests for any 
 * character for which isupper or islower is true.
 * @param c1 Character
 * @return Return 0 if c isn't Alphanumeric
 * Return 1 if c is Alphanumeric*/
int	ft_isalpha(int c);

/** 		ISDIGIT
 *  @brief The ft_isdigit function tests for a decimal
 *  digit character
 * @param d Character
 * @return Return 0 (Non decimal-False) Return 1 (Decimal- True)*/	
int	ft_isdigit(int d);

/**								ISALNUM
 * @brief	Check that it is alphanumeric.
 * 
 * @param c Character to be checked.
 * 
 * @return True if the character is alphanumeric.
 * @return False if the character is not alphanumeric.
 **/
int		ft_isalnum(int d);

/**			ISASCII
 * @brief The ft_isascii function tests for an ASCII character,
 * which is any charac-ter character between 0 and digital 127 
 * inclusive.
 * @param d Character
 * @return Return 0 (Non ASCII-False) 
 * 					Return 1 (ASCII- True)
 */
int	ft_isascii(int d);

/**			ISPRINT
 * @brief The ft_isprint function tests for any printing character,
 * including space. ASCII DECIMAL 32 - 126
 * @param d Character
 * @return Return 0 (Non printable) 
 * 					Return 1 (Printable)
 */
int	ft_isprint(int d);

/**			TOUPPER
 * @brief The ft_toupper function converts a lower-case letter to the
 * corresponding upper-case letter.
 * Google: toupper function code mac
 * @param c Lowercase character
 * @return Return c converted in Uppercase.
 */
int	ft_toupper(int c);

/**			TOLOWER
 * @brief The ft_tolower function converts a upper-case letter to the
 * corresponding lower-case letter.
 * Google: tolower function code mac
 * @param c Uppercase character
 * @return Return c converted in Lowercase.
 */
int	ft_tolower(int d);

/**			STRCHR
 * @brief The strchr() function locates the FIRST occurrence of c
 * (converted to a		 char) in the string pointed to by s.  The 
 * terminating null character isconsidered to be part of the string;
 * therefore if c is `\0', the functions locate the terminating `\0'.
 * @param s A string
 * @param c Character we want to locate
 * @return a pointer to the located character.
 */
char *ft_strchr(const char *s, int c);

/**			STRRCHR
 * @brief The strrchr() function locates the LAST occurrence of c
 * (converted to a		 char) in the string pointed to by s.  The 
 * terminating null character isconsidered to be part of the string;
 * therefore if c is `\0', the functions locate the terminating `\0'.
 * @param s A string
 * @param c Character we want to locate
 * @return a pointer to the located character.
 */
char *ft_strrchr(const char *s, int c);

/**
 * @brief The ft_strlen function computes the length of the string array.
 * @param array 
 * @return  The ft_strlen function returns the number of characters that 
 * precede the terminating NUL character.
 */
size_t ft_strlen(char *array);

/**
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
int ft_strncmp(char *s1, char *s2, unsigned int n);

/**			BZERO
 * @brief The ft_bzero() function writes n zeroed bytes to the string s.
 * If n is zero, ft_bzero() does nothing.
 * @param s String
 * @param n numbers of bytes must be zero.
 * @return Nothing
 */
void ft_bzero(void *s, size_t n);

/**
 * @brief The memset() function writes n bytes of value c (converted
 *  to an unsigned char) to the string s.
 * @param b String
 * @param c Character to write
 * @param len Number of bytes to write with character
 * @return String b with the chages.
 */
void *ft_memset(void *b, int c, size_t len);

/**
 * @brief The memchr() function locates the first occurrence 
 * of c (converted to an unsigned char) in string s.
 * @param s String	
 * @param c Character to locate
 * @param n Numbers ob bytes to search c into s.
 * @return The memchr() function returns a pointer to the byte 
 * located, or NULL if no such byte exists within n bytes.
 */
void *ft_memchr(const void *s, int c, size_t n);

/**
 * @brief The memcmp() function compares byte string s1 against byte
 *  string s2. Both strings are assumed to be n bytes long.
 * @param s1 String 1, (memory)
 * @param s2 String 2 (memory)
 * @param n Number of bytes to compare
 * @return The memcmp() function returns zero if the two strings are 
 * identical, oth-erwise otherwise returns the difference between the
 * first two differing bytes(treated as unsigned char values, so that
 * `\200' is greater than `\0', for example).
 * Zero-length strings are always identical.
 */
int ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief  The memcpy() function copies n bytes from memory area s2 to 
 * memory area s1. If s1 and s2 overlap, behavior is undefined. 
 * Applications in which s1 and s2 might overlap should use 
 * memmove(3) instead.
 * @param s1 String destiny (memory)
 * @param s2 String Source (memory)
 * @param n Number of byte to copy.
 * @return Pointer to string destiny.
 */
void *ft_memcpy(void *s1, const void *s2, size_t n);


#endif