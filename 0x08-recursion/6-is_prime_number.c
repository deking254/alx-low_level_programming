#include "main.h"
#include <stdio.h>
int isprime(int i, int e, int n);

/**
 * isprime - check the code
 * @i: character
 * @e: character
 * @n: character
 * Return: Always 0.
 */
int isprime(int i, int e, int n)
{
int ip;
if (n <= 1)
return (0);
if (i < e)
{
if (n % i != 0)
{
i++;
return (1);
isprime(i, e, n);
}
else
ip = 0;
}
return (ip);
}

/**
 * is_prime_number - check the code
 * @n: character
 * Return: Always 0.
 */
int is_prime_number(int n)
{
int i = 2;
int e;
if (n % 2 != 0)
{
e = (n - 1) / 2;
}
return (isprime(i, e, n));
}
