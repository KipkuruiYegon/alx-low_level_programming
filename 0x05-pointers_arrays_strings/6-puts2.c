#include "main.h"
/**
* puts2 - prints one char out of 2 of a string
* followed by a new line
* @str: string to print the chars from
*/
void puts2(char *str)
{
	int longi = 0;
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	x = longi - 1;
	for (z = 0; z <= x; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');

}

