#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: the char to check
* Return: 1 for c is uppercase, else 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
