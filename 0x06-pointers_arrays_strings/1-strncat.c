#include "main.h"

/**
 * _strncat - check the code
 * @dest: integer operand.
 * @src: integer operand.
 * @n: integer operand.
 * Return: Always int.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int destlen = 0;

while (dest[i++])
{
destlen++;
}
for (i = 0; src[i] && i < n; i++)
dest[destlen++] = src[i];
return (dest);
}
