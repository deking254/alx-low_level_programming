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
char *tyu[100];
va_start(po, n);

for (i = 0; i < n; i++)
{
tyu[i] = va_arg(po, char *);
if (tyu[i] == NULL)
printf("(nil)");
else
printf("%s", tyu[i]);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
}
