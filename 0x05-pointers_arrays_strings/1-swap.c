#include "main.h"
/**
 * swap_int - will swap the two intergers
 * @a: first int
 * @b: second int
 *
 */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
