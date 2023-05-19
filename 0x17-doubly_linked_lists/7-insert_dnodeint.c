#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: h
 * @idx: c
 * @n: n
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *ne = *h;
unsigned int i = 0;
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
while (ne)
{
if (i != idx)
{
if (ne != NULL)
{
if (i == idx - 1)
{
new->next = ne->next;
if (ne->next)
ne->next->prev = new;
new->prev = ne;
ne->next = new;
return (new);
}
ne = ne->next;
i++;
}
if (ne == NULL)
break;
}
if (idx == 0)
{
new->next = ne;
new->prev = NULL;
ne->prev = new;
*h = new;
return (new);
}
}
}
return (NULL);
}
