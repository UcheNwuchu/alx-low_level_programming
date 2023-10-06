#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase uppercase
 * Return: 0 (Success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
