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
int len = 0, leng = 0;
char *namecopy;
char *ownercopy;
if (name != NULL)
{
namecopy = malloc(_strlen(name));
if (namecopy != NULL)
_strcpy(namecopy, name);
}
else
{
return (NULL);
}
if (owner != NULL)
{
ownercopy = malloc(sizeof(char) * (_strlen(owner)));
if (ownercopy != NULL)
_strcpy(ownercopy, owner);
}
else
return (NULL);
p = malloc(sizeof(char) * (len++) + sizeof(age) +
sizeof(char) * (leng++));
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
