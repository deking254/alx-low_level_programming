#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a: pointer a
 * @n: int n
 * Return: Always void.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%d", a[i]);
}
else
{
printf("%d ,", a[i]);
}
}
_putchar("\n");
}
