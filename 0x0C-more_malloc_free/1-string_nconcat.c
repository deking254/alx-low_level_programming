#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - check the code
 * @s1: integer operand.
 * @s2: integer operand.
 * @n: integer operand.
 * Return: Always int.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k = 0, l = 0;
char *a;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[k])
k++;
if (n >= k)
l = i + k;
else
l = i + n;
a = malloc(sizeof(char) * l + 1);
if (a == NULL)
return (NULL);

k = 0;
while (j < l)
{
if (j <= i)
a[j] = s1[j];
if (j >= i)
{
a[j] = s2[k];
k++;
}
j++;
}
a[j] = '\0';
return (a);
}
