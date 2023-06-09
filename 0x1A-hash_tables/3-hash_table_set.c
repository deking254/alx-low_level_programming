#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * hash_table_set - check the code
 * @key: key
 * @ht: ht
 * @value: val
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
static unsigned long int l = 0;
hash_node_t *new;
if (ht)
{
if (key == NULL || strlen(key) == 0)
return (0);
else
{
new = malloc(sizeof(hash_node_t));
if (new != NULL)
{
index = key_index((const unsigned char *)key, ht->size);
new->key = (char *)key;
new->value = (char *)value;
new->next = NULL;
if (ht->array)
{
if (l != index)
ht->array[index] = new;
else
{
new->next = ht->array[index];
ht->array[index] = new;
}
}
else
return (0);
}
else
return (0);
}
}
else
return (0);
return (1);
}
