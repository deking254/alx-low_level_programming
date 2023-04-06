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
static char bits[64];
char *bitsptr = bits;
unsigned long int m;
int ind = 0;
for (i = 63; i >= 0; i--)
{
m = 1Ul << i;
if (bits != NULL)
{
if ((n & m) == m)
{
*(bitsptr + ind) = '1';
ind++;
}
else
{
*(bitsptr + ind) = '0';
ind++;
}
}
else
return (-1);
}
if (*(bitsptr + (63 - index)) == 48)
return (0);
return (1);
}
