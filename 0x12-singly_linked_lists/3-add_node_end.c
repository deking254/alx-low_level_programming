#include "lists.h"

/**
 * add_node_end - check the code
 * @head: head
 * @str: str
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *next_new;
list_t *init = *head;
unsigned int i = 0;
next_new = malloc(sizeof(list_t));
if (next_new != NULL)
{
if (str != NULL)
{
next_new->str = strdup(str);
while (str[i] != '\0')
i++;
next_new->len = i;
}
next_new->next = NULL;
if (*head == NULL)
*head = next_new;
else
{
while (init->next != NULL)
init = init->next;
init->next = next_new;
}
}
else
return (NULL);
return (init);
}
