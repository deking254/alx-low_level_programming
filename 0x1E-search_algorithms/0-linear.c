#include "search_algos.h"
#include <stdlib.h>
void print_linear(int value, int index);
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

/**
 * print_linear  - Entry point
 * @value: value searched
 * @index: i
 * Return: Always EXIT_SUCCESS
 */
void print_linear(int value, int index)
{
char str[20];
char ind[20];
fputs("Value checked array[", stdout);
snprintf(ind, 20, "%d", index);
fputs(ind, stdout);
putchar(']');
fputs(" = [", stdout);
if (value < 0)
{
putchar('-');
snprintf(str, 20, "%d", value * -1);
fputs(str, stdout);
}
if (value > 0)
{
snprintf(str, 20, "%d", value);
fputs(str, stdout);
}
if (value == 0)
putchar('0');
putchar(']');
putchar('\n');
}
