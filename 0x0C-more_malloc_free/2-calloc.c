#include <stdlib.h>
#include "main.h"

/**
 * *_memset - A function that fills
 * memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strArray;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	strArray = malloc(nmemb * size);

	if (strArray == NULL)
	{
		return (NULL);
	}
	counter = 0;

	while (counter < (nmemb * size))
	{
		strArray[counter] = 0;
		counter++;
	}
	return (strArray);
}
