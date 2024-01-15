#include "main.h"
#include <stdio.h>

/**
* *_strchr - find the location of a character in a string
* @s: string to be searched
* @c: character to be found
*
* Return: a pointer to the first occurrence of the character
* c in the string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
