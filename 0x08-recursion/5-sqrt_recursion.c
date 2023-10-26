#include "main.h"
/**
* int_sqrt_recursion - returns the natural square root of a number
* @n: int arg
* @result: int arg
* Return: sqaure root
*/
int int_sqrt_recursion(int n, int result)
{
if (result * result == n)
{
return (result);
}
else if (result * result > n)
{
return (-1);
}
else
return (int_sqrt_recursion(n, result + 1));
}
/**
* _sqrt_recursion - natural square root of a number
*
* @n: int arg
*
* Return: int
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (int_sqrt_recursion(n, 0));
}
