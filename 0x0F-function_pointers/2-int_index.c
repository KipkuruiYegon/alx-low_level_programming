#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that indexes aray i think
 * @array: the array to go through
 * @size: the size of array
 * @cmp: the function to do something with size
 * Return: the int value, else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
