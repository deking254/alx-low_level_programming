#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: pointer
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
