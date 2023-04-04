#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: h
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
listint_t *save;
listint_t *sav;
if (head != NULL)
{
save = *head;
sav = *head;
while (save)
{
sav = sav->next;
free(save);
save = sav;
}
*head = NULL;
}
else
return;
}
