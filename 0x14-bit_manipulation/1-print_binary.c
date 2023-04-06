#include "main.h"

/**
 * print_binary - check the code
 * @n: n
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
int i, status = 0;
for (i = 63; i >= 0; i--)
{
unsigned long m = 1UL << i;
if ((n & m) == m)
{
printf("1");
status = 1;
}
else
{
if (status == 1)
printf("0");
}
}
if (status == 0)
printf("0");
}
