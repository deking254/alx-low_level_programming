#include "search_algos.h"
void print_array(int *array, size_t end, size_t current_index);
/**
 * binary_search - Entry point
 * @array: arr
 * @size:size of arr
 * @value: search
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
size_t index;
size_t start_index = 0;
size_t end_index = size - 1;
print_array(array, end_index, start_index);
while (start_index <= end_index)
{
index = start_index + (end_index - start_index) / 2;
if (array[index] == value)
return (index);
if (array[index] > value)
{
end_index = index - 1;
}
else
start_index = index + 1;
if (start_index <= end_index)
print_array(array, end_index, start_index);
}
return (-1);
}

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

