#include <stdio.h>
#include "dog.h"
/**
 * print_dog - check the code
 * @d: integer operand.
 * Return: Always int.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
if ((d->age))
printf("Age: %f\n", d->age);
else
printf("Age: 0\n");
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}
}
