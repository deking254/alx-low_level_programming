#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: head
 * @n: i
 * Return: Always void.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *init;
init = *head;
new = malloc(sizeof(listint_t));
if (new != NULL)
{
new->n = n;
new->next = NULL;
}
else
return (NULL);
if (*head == NULL)
*head = new;
else
{
while (init->next != NULL)
{
init = init->next;
}
init->next = new;
}
return (new);
}
