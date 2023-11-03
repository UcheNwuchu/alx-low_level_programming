#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat -Function to concatenates n
 * bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter1, counter2, i, j;
	char *strTemp;

	counter1 = 0;
	counter2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[counter1] != '\0')
		counter1++;
	while (s2[counter2] != '\0')
		counter2++;

	if (n > counter2)
	{
		n = counter2;
	}
	strTemp = malloc(sizeof(char) * (counter1 + (n + 1)));

	if (strTemp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < counter1; i++)
	{
		strTemp[i] =  s1[i];
	}

	for (j = 0; j < n; j++)
	{
		strTemp[i] = s2[j];
		i++;
	}
	strTemp[i] = '\0';
	return (strTemp);
}
