#include <stdio.h>
#include "main.h"

/**
 * main - print received arguments
 * @argc: number of arguments
 * @argv: array arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);
}
