#include "main.h"

/**
 * leet - check the code
 * @str: integer operand.
 * Return: Always int.
 */
char *leet(char *str)
{
int i1 = 0;
int i2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[i1])
{
for (i2 = 0; i2 <= 7; i2++)
{
if (str[i1] == leet[i2] || str[i1] -32 == leet[i2])
str[i1] = i2 + '0';
}
i1++;
}
return (str);
}
