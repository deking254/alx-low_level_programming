#include "lists.h"

/**
 * reverse_listint - check the code
 * @head: h
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *nextsave = NULL;
listint_t *previous = NULL;
while (*head != NULL)
{
nextsave = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = nextsave;
}
*head = previous;
return (*head);
}
