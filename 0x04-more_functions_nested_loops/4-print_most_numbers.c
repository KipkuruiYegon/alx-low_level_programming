#include "main.h"

/**
 * print_most_numbers - prints nubers range 0 to 9
 *
 * Except numbers 2 ans 4
 *
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

