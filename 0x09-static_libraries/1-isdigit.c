#include "main.h"

/**
 * _isdigit - checks for  digit from 0 through 9
 * @c: integer to be checked
 * Return: 1 if its digit, else 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
