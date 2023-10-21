#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers.
* @a: arg array
* @n: number of elements of array
* Return: void
*/

void reverse_array(int *a, int n)
{
int i, temp;
i = 0;
temp = 0;
n -= 1;
while (i <= n)
{
temp = a[n];
a[n--] = a[i];
a[i++] = temp;
}
}
