#include "main.h"

/**
 * _strncpy - check the code
 * @dest: integer operand.
 * @src: integer operand.
 * @n: integer operand.
 * Return: Always int.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int srclen = 0;

while (src[i++])
{
srclen++;
}
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = srclen; i < n; i++)
dest[i] = '\0';
return (dest);
}
