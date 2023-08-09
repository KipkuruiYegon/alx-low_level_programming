#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: array arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore the argv*/
	printf("%d\n", argc - 1);

	return (0);
}
