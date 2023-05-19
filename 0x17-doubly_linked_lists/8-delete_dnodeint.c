#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head: hed
 * @index: index
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *ne = *head;
if (*head != NULL)
{
while (ne)
{
if (i == index)
{
if (index == 0)
{
if (ne->next)
{
ne = ne->next;
free(ne->prev);
*head = ne;
}
else
{
free(ne);
*head = NULL;
}
return (1);
}
if (ne->next)
{
ne->next->prev = ne->prev;
ne->prev->next = ne->next;
free(ne);
return (1);
}
else
{
free(ne);
return (1);
}
}
ne = ne->next;
i++;
}
}
return (-1);
}
