#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to a character that is the character found
 */
char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] != '\0' ; r++)
	{
		if (s[r] == c)
		return (&s[r]);
	}
	return (0);
}
