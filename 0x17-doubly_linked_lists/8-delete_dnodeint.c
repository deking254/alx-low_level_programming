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
if (*head)
{
while (ne)
{
if (i == index)
{
if (index == 0)
{
if (ne->next)
{
*head = ne->next;
free(ne); }
else
{
free(*head);
*head = NULL; }
return (1);
}
else
{
if (ne->next->next)
{
ne->next->prev = ne->prev;
ne->prev->next = ne->next;
free(ne);
}
else
{
free(ne);
ne = NULL; }
return (1); }
}
ne = ne->next;
i++; }
}
return (-1); }
