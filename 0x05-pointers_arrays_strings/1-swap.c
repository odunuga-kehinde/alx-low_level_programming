#include "main.h"

/**
 * swap_int - swap two integer values
 * @a: first int
 * @b: pointer variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
