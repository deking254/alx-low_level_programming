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
if (*head != NULL)
{
sav = *head;
save = *head;
while (save != NULL)
{
sav = sav->next;
free(save);
save = sav;
}
*head = NULL;
}
else
free(*head);
}
