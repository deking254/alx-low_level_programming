#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - check the code
 * @s: integer operand.
 * Return: Always int.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;
while (i < 5)
{
if (s != NULL && *s == *(ops[i].op))
{
return (*(ops[i].f));
break;
}
i++;
}
return (0);
}
