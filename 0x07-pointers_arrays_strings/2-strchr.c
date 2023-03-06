#include "main.h"
#include <stdio.h>

/**
 * _strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strchr(char *s, char c)
{
int i = 0;
int j;

while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (s[j] == c)
return (s + j);
}
return (NULL);
}
