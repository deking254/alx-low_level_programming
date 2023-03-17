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
int i = 0, l = 0;
char*ptrr;

ptrr = NULL;
ptrr = realloc(ptrr, 30);
if (ptrr == NULL)
printf("it is null");
else
printf("it not null");
l = new_size;
i = old_size + new_size;
if (new_size > old_size)
{
free(ptr);
ptr = malloc(l);
}
if (ptr == NULL)
ptr = malloc(i);
if (new_size == old_size)
return (ptr);
if (ptr != NULL && new_size == 0)
{
return (NULL);
}
return (ptr);
}
