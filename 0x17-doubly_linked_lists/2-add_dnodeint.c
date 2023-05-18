#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: hed
 * @n: rty
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *ne = *head;
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = ne;
new->prev = NULL;
if (ne)
ne->prev = new;
*head = new;
}
if (new == NULL)
return (NULL);
else
return (new);
}
