#include "main.h"
/**
 * _strlen - to return string length
 * @s: the string
 *
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0');
	{
		longi++;
		s++;
	}

	return (longi);
}
