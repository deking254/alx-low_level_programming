#include "search_algos.h"
/**
 * print_array - Entry point
 * @end: arr
 * @current_index:size of arr
 * Return: Always EXIT_SUCCESS
 */
void print_array(int *array, size_t end, size_t current_index)
{
size_t i = 0;
char ind[20];
fputs("Searching in array: ", stdout);
while (end >= (current_index + i))
{
if (end == (current_index + i))
{
if (array[current_index + i] < 0)
{
putchar('-');
putchar('0' + (array[current_index + i] * -1));
}
if (array[current_index + i] > 0)
{
snprintf(ind, 20, "%d", array[current_index + i]);
fputs(ind, stdout);
}
if (array[current_index + i] == 0)
putchar('0');
}
else
{
if (array[current_index + i] < 0)
{
putchar('-');
snprintf(ind, 20, "%d", array[current_index + i] * -1);
fputs(ind, stdout);
}
if (array[current_index + i] > 0)
putchar('0' + (array[current_index + i]));
if (array[current_index + i] == 0)
putchar('0');
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
}

