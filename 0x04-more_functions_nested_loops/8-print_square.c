#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 *
 *@size : the number of the squares(#)
 */

void print_square(int size)
{
	int a, y;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
