#include "search_algos.h"
#include <stdlib.h>
/**
 * linear_search  - Entry point
 * @array: arr
 * @size: size of array
 * @value: value searched
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;
int status;
if (array)
{
for (i = 0; i < size; i++)
{
print_linear(array[i], i);
if (array[i] == value)
{
status = 1;
break;
}
if (i == size - 1)
{
status = 0;
}
}
if (status == 1)
{
return (i);
}
else
return (-1);
}
