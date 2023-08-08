#include "main.h"
/**
 * _strspn - entry point
 * @s: value input
 * @accept: value input
 *
 * return: Always 0 (Success)
 */
unsigned int_strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
		}
		else if (accept[i + 1] == '\0')
			return (n);
		}
		s++;
	}
	return (n);
}
