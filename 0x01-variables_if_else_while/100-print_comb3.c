#include <stdio.h>
/**
 * main -A program that prints different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num <= 99; num++)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
if (num != 99);
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
