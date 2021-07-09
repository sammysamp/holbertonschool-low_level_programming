#include "holberton.h"
/**
 * strl - calculate length of given string
 * @s: string to evaluate
 *
 * Return: length
 */
int strl(char *s)
{
	if (!(*s))
		return (0);
	s++;
	return (1 + strl(s));
}

/**
 * is_palind2 - evaluate palindrome condition with recursion
 * @s: string to evaluate
 * @a: int variable to help evaluate it with recursion
 * @len: lengtrh of tring s
 *
 * Return: 1 if is palindrome
 * 0 is not
 */
int is_palind2(char *s, int a, int len)
{
	if (len < a)
	{
		return (1);
	}
	if (*(s + a) != *(s + len))
	{
		return (0);
	}
	return (is_palind2(s, a + 1, len - 1));
}
/**
 * is_palindrome - add new parameter for next recursion function
 * @s: string to evaluate
 *
 * Return: Result of the recursion function
 */
int is_palindrome(char *s)
{
	int a = 0, len = strl(s);

	return (is_palind2(s, a, len - 1));
}
