#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: set string to be encoded
 *
 * Return: the resulting encoded string;
 */
char *leet(char *s)
{
	int i, j;

	char *k = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == k[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
