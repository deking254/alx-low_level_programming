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
listint_t *current = *head;
while (current != NULL)
{
nextsave = current->next;
current->next = previous;
previous = current;
current = nextsave;
}
*head = previous;
if (*head != NULL)
printf("pree %d\n", (*head)->n);
return (*head);
}
