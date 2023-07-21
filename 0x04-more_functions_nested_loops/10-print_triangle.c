#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *@size : the size of a triangle
 */

void print_triangle(int size)

{
	int a, y;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
	for (y = 0; y < size; y++)
	{
	if (y < size - (a + 1))
	{
	_putchar(' ');
	}
	else
	{
	_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}

}
