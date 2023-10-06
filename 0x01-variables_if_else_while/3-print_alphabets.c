#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase uppercase
 * Return: 0 (Success)
 */
int main(void)
{
char c;
char d;
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
d = 'A';
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
