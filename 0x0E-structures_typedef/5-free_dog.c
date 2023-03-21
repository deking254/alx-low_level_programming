#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - check the code
 * @d: integer operand.
 * Return: Always int.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
free(d);
}
