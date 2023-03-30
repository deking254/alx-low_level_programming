#include "lists.h"

/**
 * add_node - check the code
 * @head: head
 * @str: ty
 * * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int i = 0;

new = malloc(sizeof(list_t));
if (new != NULL)
{
new->str = strdup(str);
if (str != NULL)
{
while (str[i] != '\0')
i++;
new->len = i;
}
new->next = *head;
*head = new;
}
else
return (NULL);
return (new);
}
