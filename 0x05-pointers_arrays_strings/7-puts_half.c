#include "main.h"
#include <string.h>

/**
 * puts_half - check the code
 * @str: pointer c
 * Return: Always void.
 */
void puts_half(char *str)
{
int i, j, k;

j = strlen(str);
k = j;
if ((j / 2) != 0)
{
j = (j - 1) / 2;
}
for (i = j + 1; i <= k; i++)
_putchar(str[i]);
_putchar('\n');


}
