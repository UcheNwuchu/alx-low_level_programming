#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: is a letter, lowercase or uppercase
 * Return: 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
