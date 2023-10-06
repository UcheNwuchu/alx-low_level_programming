#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase uppercase
 * Return: 0 (Success)
 */
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
