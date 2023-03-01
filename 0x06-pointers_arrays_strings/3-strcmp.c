#include "main.h"

/**
 * _strcmp - check the code
 * @s1: integer operand.
 * @s2: integer operand.
 * Return: Always int.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
