#include "main.h"
/**
* wildcmp - a function that compares two strings and returns 1
* @s1: the normal string
* @s2: the special string containing "*"
*
* Return: 1 if identical, else 0
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
else if (*s1 == '\0' || *s2 == '\0')
{
return (0);
}
if (*s2 == '*')
{
while (*s1 != '\0')
{
if (wildcmp(s1, s2 + 1))
{
return (1);
}
s1++;
}
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else
{
return (0);
}
