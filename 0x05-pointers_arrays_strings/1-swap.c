#include "main.h"

/**
 * swap_int -A function that swaps the values of two integers.
 *
 * @a: arg a
 *
 * @b: arg b
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}