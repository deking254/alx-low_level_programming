#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

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
