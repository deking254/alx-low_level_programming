#include "main.h"
#include <stdio.h>

/**
 * _strlen_rec - check the code
 * @s: character
 * Return: Always 0.
 */
int _strlen_rec(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_rec(s + 1));
}

/**
 * compare - check the code
 * @s: character
 * @n1: character
 * @n2: character
 * Return: Always 0.
 */
int compare(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + compare(s, n1 + 1, n2 - 1));
}
return (0);
}

/**
 * is_palindrome - check the code
 * @s: character
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compare(s, 0, _strlen_rec(s) - 1));
}
