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
unsigned int val = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
val++;
break;
}
else if (accept[i + 1] == '\0')
return (val);
}
s++;
}

return (val);
}
