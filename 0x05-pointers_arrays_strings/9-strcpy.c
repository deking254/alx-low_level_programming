#include "main.h"

/**
 * *_strcpy - check the code
 * @dest: pointer a
 * @src: pointer src n
 * Return: Always void.
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; ; i++)
{
if (src[i] == '\0')
{
dest[i] = src[i];
break;
}
dest[i] = src[i];
}
return (dest);
}
