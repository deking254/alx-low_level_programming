#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Short description
 * @name: tyr
 * @age: fej
 * @owner: ryey
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
