#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - check the code
 * @argv: integer operand.
 * @argc: integer operand.
 * Return: Always int.
 */
int main(int argc, char *argv[])
{
int a, b;
int (*p)(int, int);
if (argc == 4)
{
if (*argv[2] == 47 || *argv[2] == 37 ||
*argv[2] == 42 || *argv[2] == 45 || *argv[2] == 43)
{
a = atoi(argv[1]);
b = atoi(argv[3]);
p = get_op_func(argv[2]);
if (!p)
{
printf("Error\n");
exit(99);
}
else
{
printf("%d\n", get_op_func(argv[2])(a, b));
}
}
else
{
printf("Error\n");
exit(99);
}
}
else
{
printf("Error\n");
exit(98);
}
return (0);
}
