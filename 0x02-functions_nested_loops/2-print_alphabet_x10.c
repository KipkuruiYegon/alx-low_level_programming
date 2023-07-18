#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char cha;
	int i;

	i = 0;

	while (i < 10)
	{
	for (cha = 'a'; cha <= 'z'; cha++)
	{
		_putchar(cha);
	}
	_putchar('\n');
	i++;
	}
}

