#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints buffer in hexa
 * @a: the address of memory to print
 * @size: the address of memory to print
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
int i;
long sum1 = 0, sum2 = 0;
for (i = 0; i <= (size * size); i = i + size + 1)
{
sum1 += a[i];
}
for (i = size - 1 ; i <= (size * size) - size; i = i + size - 1)
{
sum2 += a[i];
}
printf("%ld, %ld\n", sum1, sum2);
}
