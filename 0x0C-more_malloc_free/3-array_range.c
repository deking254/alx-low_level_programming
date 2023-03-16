#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - check the code
 * @min: integer operand.
 * @max: integer operand.
 * Return: Always int.
 */
int *array_range(int min, int max)
{
int *a;
int i;
int j;

if (min > max)
return (NULL);
j = max - min;
a = malloc (sizeof(int) * ((max - min) + 1));
if (a == NULL)
return (NULL);
for (i = 0; i <= j; i++)
{
a[i] = min;
min++;
}
return (a);
}
