#include "main.h"
#include <stddef.h>

/**
 * _strchr - Main entry point
 * @s: value input
 * @c: value input
 *
 * Return: 0, Success
 */
char *_strchr(char *s, char c)
{
	int r = 0;

	for (; s[r] >= '\0', r++)
	{
		if (s[r] == c)
			return (&s[r]);
	}
	return (0);
}
