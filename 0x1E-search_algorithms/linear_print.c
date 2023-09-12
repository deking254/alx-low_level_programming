#include "search_algos.h"
/**
 * print_linear  - Entry point
 * @value: value searched
 * @index: i
 * Return: Always EXIT_SUCCESS
 */
void print_linear(int value, int index)
{
char str[20];
char ind[20];
fputs("Value checked array[", stdout);
snprintf(ind, 20, "%d", index);
fputs(ind, stdout);
putchar(']');
fputs(" = [", stdout);
if (value < 0)
{
putchar('-');
snprintf(str, 20, "%d", value * -1);
fputs(str, stdout);
}
if (value > 0)
{
snprintf(str, 20, "%d", value);
fputs(str, stdout);
}
if (value == 0)
putchar('0');
putchar(']');
putchar('\n');
}
