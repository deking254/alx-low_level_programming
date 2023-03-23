#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: integer operand.
 * Return: Always int.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ty;
unsigned int sum, i;
va_start(ty, n);

if (n == 0)
return (0);
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(ty, int);
va_end(ty);
return (sum);
}
