#include "main.h"
#include <stdlib.h>

/**
 * create_array - check the code
 * @size: integer operand.
 * @c: integer operand.
 * Return: Always int.
 */
char *create_array(unsigned int size, char c)
{
char *arr_ptr;
unsigned int i;
if (size == 0)
return (NULL);
else
{
arr_ptr = malloc(size);
for (i = 0; i < size; i++)
arr_ptr[i] = c;
}
return (arr_ptr);
}
