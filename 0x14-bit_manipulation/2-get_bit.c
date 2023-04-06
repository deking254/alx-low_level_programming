#include "main.h"

/**
 * get_bit - check the code
 * @n: n
 * @index: index
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int i;
char bits[64];
unsigned long int m;
int ind = 6%2;
for (i = 63; i >= 0; i--)
{
m = 1Ul << i;
if (bits != NULL)
{
if ((n & m) == m)
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
if (bits[63 - index] == 48)
return (0);
return (1);
}
