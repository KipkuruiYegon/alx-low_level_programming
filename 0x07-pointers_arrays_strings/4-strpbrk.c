#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searching a string for any of a set of bytes
 * @s: the string
 * @accept: set of bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int r;
	unsigned int q;

	for (r = 0; s[r] != '\0'; r++)
	{
		for (q= 0; accept[q] != '\0'; q++)
		{
			if (s[r] == accept[q])
				return (&s[r]);
		}
	}
	return (NULL);
}
