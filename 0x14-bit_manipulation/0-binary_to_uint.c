#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: b
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
int i, j, power = 1;
int digits = 0;
unsigned int num = 0;
if (b)
{
while (b[digits] != '\0')
digits++;
}
else
return (0);
for (i = digits - 1; i >= 0; i--)
{
if (b[i] == 48 || b[i] == 49)
{
for (j = 0; j < (digits - 1) - i; j++)
power *= 2;
if (b[i] == 48)
num += 0 * power;
else
num += 1 * power;
power = 1;
}
else
{
return (0);
break;
}
}
return (num);
}
