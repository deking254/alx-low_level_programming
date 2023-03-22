#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - check the code
 * @array: integer operand.
 * @size: integer operand.
 * @action: integer operand.
 * Return: Always int.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
