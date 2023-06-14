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
hash_node_t *new, *br;
int status = 0;
char *newval, *ke;
if (ht != NULL && value != NULL)
{
if (key == NULL || strlen(key) == 0)
return (0);
else
{
new = malloc(sizeof(hash_node_t));
if (new != NULL)
{
index = key_index((const unsigned char *)key, ht->size);
ke = strdup(key);
if (value != NULL)
newval = strdup(value);
else
return (0);
if (ht->array)
{
new->key = ke;
new->value = newval;
new->next = NULL;
if (ht->array[index] == NULL)
ht->array[index] = new;
else
{
br = ht->array[index];
while (br)
{
if (strcmp(key, br->key) == 0)
{
free(br->value);
br->value = newval;
status = 1;
}
br = br->next;
}
if (status == 0)
{
new->next = ht->array[index];
ht->array[index] = new;
}
}
}
else
return (0); }
else
return (0); }
}
else
return (0);
return (1); }
