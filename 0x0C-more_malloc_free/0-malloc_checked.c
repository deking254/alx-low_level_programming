#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - check the code
 * @b: integer operand.
 * Return: Always int.
 */
void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a != NULL)
return (a);
else
exit (98);
}
