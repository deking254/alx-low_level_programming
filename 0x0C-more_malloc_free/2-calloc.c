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

a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
a[0] = 0;
return (a);
}
