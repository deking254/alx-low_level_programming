#include "main.h"
/**
 * add_string - check the code
 * @n1: integer
 * @r: integer
 * @siz_r: integer
 * Return: Always void.
 */
char *add_strings(char *n1, char *n2, char *r, int siz_r)
{
int n, ten = 0;
for (; *n1 && *n2; n1--, n2--, siz_r--)
{
n = (*n1 - '0') + (*n2 - '0');
n += ten;
*(r + siz_r) = (n % 10) + '0';
ten = n / 10;
}
for (; *n1; n1--, siz_r--)
{
n = (*n1 - '0') + ten;
*(r + siz_r) = (n % 10) + '0';
}
for (; *n2; n2--, siz_r--)
{
n = (*n2 - '0') + ten;
*(r + siz_r) = (n % 10) + '0';
ten = n / 10;
}
if (ten && siz_r >= 0)
{
*(r + siz_r) = (ten % 10) + '0';
return (r + siz_r);
}
else if (ten && siz_r < 0)
{
return (0);
}
return (r + siz_r + 1);
}
/**
 * infinite_add - check the code
 * @n1: integer
 * @r: integer
 * @size_r: integer
 * Return: Always void.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int in, n1_len = 0, n2_len = 0;

for (in = 0; *(n1 + in); in++)
n1_len++;
for (in = 0; *(n2 + in); in++)
n2_len++;
if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
return (0);
n1 += n1_len - 1;
n2 += n2_len - 1;
*(r + size_r) = '\0';
return (add_strings(n1, n2, r, --size_r));
}
