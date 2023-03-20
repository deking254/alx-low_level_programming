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
printf("%s\n", d->name);
else
printf("Name: (nil)");
if (sizeof(d->age) == 4)
printf("%f\n", d->age);
else
printf("Age: (nil)");
if (d->owner != NULL)
printf("%s\n", d->owner);
else
printf("Owner: (nil)");
}
}
