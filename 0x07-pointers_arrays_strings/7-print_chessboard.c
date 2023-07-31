#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int t, x;

	for (t = 0; t < 8; t++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[t][x]);
		}
		_putchar('\n');
	}
}
