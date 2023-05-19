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
while (*h)
{
if (i != idx)
{
if (*h != NULL)
*h = ne->next;
if (*h == NULL)
break;
}
if (i == idx)
{
new->next = *h;
new->prev = ne->prev;
ne->prev = new;
return (new);
}
}
}
return (NULL);
}
