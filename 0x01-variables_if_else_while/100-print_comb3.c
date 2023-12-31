#include <stdio.h>
/**
 * main -A program that prints different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{

	int num = 0;
	int tens;
	int ones;

	while (num <= 99)
	{
		tens = num % 10;
		ones = num / 10;

		if (ones < tens)
		{
			putchar(ones + '0');
			putchar(tens + '0');
			if (num < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');

	return (0);
}
