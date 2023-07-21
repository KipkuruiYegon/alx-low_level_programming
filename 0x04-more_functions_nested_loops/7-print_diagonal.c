#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *@n : the inputs taken
 *
 *
 */
void print_diagonal(int n)
{
	int a, y;

	for (a = 0; a < n; a++)
	{
		if (n > 1)
			for (y = 0; y < a; y++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}

}
