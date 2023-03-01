#include "main.h"

/**
 * _strcat - check the code
 * @dest: integer operand.
 * @src: integer operand.
 * Return: Always int.
 */
char *_strcat(char *dest, char *src)
{
int dl = 0, i;
while (dest[dl])
{
dl++;
}
for (i = 0; src[i] != 0; i++)
{
dest[dl] = src[i];
dl++;
}
dest[dl] = '\0';
return (dest);
}
