#include "main.h"

/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int sum = 0;
int i;
int k;
int len = 0;

while (s[len] != 32)
len++;
for (i = 0; s[i] != 32; i++)
{
for (k = 0; k < len ; k++)
{
if (accept[i] == s[k])
sum += 1;
}
}
return (sum);
}
