#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: integer operand.
 * @n: integer operand.
 * Return: Always int.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list po;
unsigned int i;
va_start(po, n);
for (i = 0; i < n; i++)
{
if (va_arg(po, char *) == NULL)
printf("nil");
printf("%s", va_arg(po, char *));
if (i != (n - 1))
printf("%s", separator);
}
printf("\n");
}
