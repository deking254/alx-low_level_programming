#include "lists.h"

/**
 * sum_listint - check the code
 * @head: hed.
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
int total = 0;

while (head != NULL)
{
total += head->n;
head = head->next;
}
return (total);
}
