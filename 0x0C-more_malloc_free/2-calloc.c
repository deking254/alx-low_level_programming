#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - check the code
 * @nmemb: integer operand.
 * @size: integer operand.
 * Return: Always int.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int i = 0, l = 0;

if (nmemb == 0 || size == 0)
return (NULL);
l = nmemb * size;
a = malloc(l);
if (a == NULL)
return (NULL);
while (i < l)
{
a[i] = 0;
i++;
}
return (a);
}
