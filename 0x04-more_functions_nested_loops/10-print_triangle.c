#include "main.h"
/**
 * print_triangle - prints a triangle on the screen
 *
 * @size: desired size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int spaces;
	int hash;
	int i;

	i = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (size > 0)
	{
		spaces = size - 1;

		while (spaces > 0)
		{
			_putchar(' ');
			--spaces;
		}
		hash = 0;

		while (hash != i)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		i++;
		size--;
	}
}
