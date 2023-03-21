#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - check the code
 * @name: integer operand.
 * @age: integer operand.
 * @owner: integer operand.
 * Return: Always int.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
char *namecopy;
char *ownercopy;
namecopy = malloc(30);
ownercopy = malloc(sizeof(char) * strlen(owner));
if (name == NULL || owner == NULL || !(age))
return (NULL);
if (namecopy != NULL)
strcpy(namecopy, name);
if (ownercopy != NULL)
strcpy(ownercopy, owner);
p = malloc(sizeof(char) * strlen(name) + sizeof(age) +
sizeof(char) * strlen(owner));
if (p != NULL)
{
p->name = name;
p->age = age;
p->owner = owner;
}
else
return (NULL);
return (p);
}
