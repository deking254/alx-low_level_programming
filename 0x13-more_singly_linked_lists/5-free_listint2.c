#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: h
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
listint_t *sav;
listint_t *save;
save = *head;
sav = *head;
if (*head)
{
while (save != NULL)
{
sav = save->next;
free(save);
save = sav;
}
}
else
free (*head);
*head = NULL;
}
