#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

void print_array(int *array, size_t size, size_t current_index);
/**
 * binary_search - Entry point
 * @array: arr
 * @size:size of arr
 * @value: search
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
size_t new_size;
size_t index;
size_t start_index = 0;
size_t end_index = size - 1;
int status = 2;
if (array)
{
print_array(array, size, 0);
index = size / 2;
if (array[index] != value)
{
print_array(array, size, index);
if (array[index] < value)
status = 0;
else
status = 1;
}
while (array[index] != value)
{
print_array(array, new_size, index);
if (array[index] < value)
{
if (status == 1)
end_index = index;
if (status == 0)
start_index = index;
new_size = (end_index - start_index) + 1;
if (new_size == 1 && array[index] != value)
return (-1);
index = (new_size / 2) + start_index;
status = 0;
}
else
{
if (array[index] > value)
{
print_array(array, new_size, index);
if (status == 1)
end_index = index;
if (status == 0)
start_index = index;
new_size = (end_index - start_index) + 1;
if (new_size == 1 && array[index] != value)
return (-1);
index = (new_size / 2) + start_index;
status = 1;
}
}
}
}
return (index);
}

void print_array(int *array, size_t size, size_t current_index)
{
size_t i;
printf("%ld", size);
printf("[");
for (i = 1; i < size; i++)
{
printf("%d", array[current_index]);
current_index += i;
}
printf("]\n");
}

