#include "main.h"

/**
* *_memset - filling  memory with a constant byte
* @s: memory location to be filled
* @b: character to be copied
* @n: frequency to copy b
*
* Return: points to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
