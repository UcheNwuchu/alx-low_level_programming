#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes
 * a function given as a parameter
 * on each element of an array
 * @array: the array to iterate over
 * @size: size of the array
 * @action: pointer to the function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
