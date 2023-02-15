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

/**			ISALNUM
 * @brief  The ft_isalnum function tests for a decimal or
 * digit character
 * @param d Character
 * @return Return 0 (Non decimal/digit-False) 
 * 					Return 1 (Decimal/digit- True)
 */
int	ft_isalnum(int d);

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
 * @return  The ft_strlen function returns the number of characters that precede
 *  the terminating NUL character.
 */
size_t ft_strlen(char *array);

#endif