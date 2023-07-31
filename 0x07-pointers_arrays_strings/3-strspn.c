#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 *
 * Return: the number of bytes which  compose the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int r;
	int q;
	unsigned int length;

	length = 0;
	for (r = 0; s[r] != '\0'; r++)
	{
		for (q = 0; accept[q] != '\0' && accept[q] != s[r]; q++)
			;
		if (s[r] == accept[q])
			length++;
		if (accept[q] == '\0')
			return (length);
	}
	return (length);
}
