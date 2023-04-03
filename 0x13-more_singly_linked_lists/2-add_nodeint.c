#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: head.
 * @n: integer.
 * Return: Always void.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new != NULL)
{
new->n = n;
new->next = *head;
*head = new;
}
else
return (NULL);
return (*head);
}
