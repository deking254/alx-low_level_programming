#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: hed
 * @n: n
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *ne = *head;
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = NULL;
new->prev = *head;
}
else
return (NULL);
if(*head == NULL)
{
*head = new;
return (new);
}
while (ne->next != NULL)
{
ne = ne->next;
}
ne->next = new;
return (new);
}
