#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints its own opcodes
 * @argc: A number of arguments
 * @argv: An array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{

	int i;

	/*  Correct # of args  */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/*  Are bytes less than 0  */
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + i));
		i++;
		if (i < atoi(argv[1]))
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
