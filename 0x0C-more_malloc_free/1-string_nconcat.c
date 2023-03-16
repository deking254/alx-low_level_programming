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
char *t;
unsigned int i, j = 0;

t = malloc(strlen(s1) + strlen(s2));
t[0] = 'c';
if (t == NULL)
{
return (NULL);
}
for (i = 0; i < strlen(s1); i++)
{
t[i] = s1[i];
}
for (i = strlen(s1); i < strlen(s1) + n; i++)
{
t[i] = s2[j];
j++;
}
return (t);
}
