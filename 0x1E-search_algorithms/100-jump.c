#include <math.h>
#include "search_algos.h"
void print_value(size_t prev, size_t step);
void print_linear(int value, int index);
/**
 * jump_search - Entry point
 * @array: arr
 * @size:size of arr
 * @value: search
 * Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
if (array)
{
size_t step = sqrt(size);
size_t prev = 0;
size_t i;
while (array[prev] < value)
{
print_linear(array[prev], prev);
prev = prev + step;
if (prev >= size)
{
print_value(prev, step);
print_linear(array[prev - step], prev - step);
return (-1);
}
}
print_value(prev, step);
for (i = (prev - step); i <= prev; i++)
{
if (array[i] == value)
{
print_linear(array[i], i);
return (i);
}
else
{
print_linear(array[i], i);
}
}
}
return (-1);
}

/**
 * print_value - Entry point
 * @prev:prev
 * @step: step
 * Return: Always EXIT_SUCCESS
 */
void print_value(size_t prev, size_t step)
{
char ind[20];
char val[20];
fputs("Value found between indexes [", stdout);
snprintf(ind, 20, "%ld", prev - step);
snprintf(val, 20, "%ld", prev);
fputs(ind, stdout);
fputs("] and [", stdout);
fputs(val, stdout);
putchar(']');
putchar('\n');
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
