#include "main.h"
char *prnt_binary(unsigned long int n);
/**
 * flip_bits - check the code
 * @n: n
 * @m: m
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
char *nptr;
char *mptr;
int i;
unsigned int sum = 0;

nptr = prnt_binary(n);
mptr = prnt_binary(m);
if (nptr != NULL && mptr != NULL)
{
for (i = 0; i <= 63; i++)
{
if (nptr[i] != mptr[i])
sum += 1;
}
}
return (sum);
}
/**
 * prnt_binary - check the code
 * @n: n
 * Return: Always 0.
 */
char *prnt_binary(unsigned long int n)
{
int i;
char *bitsptr;
int ind = 0;
bitsptr = malloc(64);
for (i = 63; i >= 0; i--)
{
unsigned long m = 1UL << i;
if ((n & m) == m)
{
bitsptr[ind] = '1';
ind++;
}
else
{
bitsptr[ind] = '0';
ind++;
}
}
return (bitsptr);
}
