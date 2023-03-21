#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - check the codeerand.
 * @src: integer operand.
 * Return: Always int.
 */
int _strlen(char *src)
{
int len = 0;
while (src[len] != '\0')
{
len++;
}
return (len++);
}
/**
 * _strcpy - check the code
 * @dest: integer operand.
 * @src: integer operand.
 * Return: Always int.
 */
char *_strcpy(char *dest, const char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
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
int name_l = 0, own_l = 0;
if (name != NULL && owner != NULL)
{
name_l = _strlen(name);
own_l = _strlen(owner);
p = malloc(sizeof(dog_t));
if (p == NULL)
return (NULL);
p->name = malloc(sizeof(char) * name_l);
if (p->name == NULL)
{
free(p);
return (NULL);
}
p->owner = malloc(sizeof(char) * own_l);
if (p->owner == NULL)
{
free(p->name);
free(p);
return (NULL);
}
p->name = _strcpy(p->name, name);
p->owner = _strcpy(p->owner, owner);
p->age = age;
}
return (p);
}
