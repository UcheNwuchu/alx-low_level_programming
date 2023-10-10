#include "main.h"
/**
 * print_alphabet - A function that prints the alphabet in lowercase
 *
 * Return: void (Success)
 */
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
