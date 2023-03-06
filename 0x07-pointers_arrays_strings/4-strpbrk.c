#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strpbrk(char *s, char *accept)
{
int i;
int k;

for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == accept[k])
return (s + i);
}
}
return (NULL);
}
