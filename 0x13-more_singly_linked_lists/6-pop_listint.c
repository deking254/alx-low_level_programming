#include "lists.h"

/**
 * pop_listint - check the code
 * @head: hed.
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
listint_t *sav;
int i;

if (*head)
{
i = (*head)->n;
sav = (*head)->next;
free(*head);
*head = sav;
}
return (i);
}
