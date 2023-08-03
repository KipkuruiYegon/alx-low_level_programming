#include "main.h"

/**
 * wildcmp - function checks for two possible strings with  wildcard '*' character.
 * @s1: The first input string.
 * @s2: The second input string with possible '*' wildcard.
 * Return: 1 if identical, 0 else.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
