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

a = ptr;
if (new_size > old_size)
{
free(a);
a = (char *)malloc(new_size);
}
if (new_size < old_size)
{
free(a);
a = malloc(new_size + old_size);
a[0] = 0;
}
if (new_size == old_size)
{
return (a);
}
if (a == NULL)
{
a = malloc(new_size);
a[0] = 0;
}
if (a != NULL && new_size == 0)
{
return (NULL);
}
return (a);
}
