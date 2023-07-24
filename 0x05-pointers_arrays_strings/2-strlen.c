#include "main.h"
/**
 * _strlen - return length of string
 * @s: string input
 *
 */
int _strlen(char *s)
{
	int longi = 0;

	while(*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
	
}
