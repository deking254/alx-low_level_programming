#include "main.h"
unsigned int binary_to_uint(const char *b);
/**
 * clear_bit - check the code
 * @n: n
 * @index: i
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
int i;
char *bits;
unsigned int m;
int ind = 0;
bits = malloc(64);
for (i = 63; i >= 0; i--)
{
if (n != NULL && index <= 63)
{
m = 1UL << i;
if ((n[0] & m) == m)
{
bits[ind] = '1';
ind++;
}
else
{
bits[ind] = '0';
ind++;
}
}
else
return (-1);
}
bits[63 - index] = '0';
n[0] = binary_to_uint(bits);
return (1);
}
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
