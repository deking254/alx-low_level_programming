#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check the code
 * @array: integer operand.
 * @size: integer operand.
 * @cmp: integer operand.
 * Return: Always int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL)
{
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
break;
}
}
}
return (-1);
}
