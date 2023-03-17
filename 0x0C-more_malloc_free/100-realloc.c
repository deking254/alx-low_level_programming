#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - check the code
 * @ptr: integer operand.
 * @old_size: integer operand.
 * @new_size: integer operand.
 * Return: Always int.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;
unsigned int i;


if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
a = malloc(new_size);
if (a == NULL)
return (NULL);
else
return (a);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
a = malloc(new_size);
if (a == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
{
a[i] = ((char *)ptr)[i];
}
free(ptr);
return (a);
}
