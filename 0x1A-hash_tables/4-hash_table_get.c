#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - check the code
 * @ht: table
 * @key: key
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i = 0;
if (ht)
{
while (i < ht->size)
{
if (ht->array != NULL)
{
if (ht->array[i] != NULL)
{
if (strcmp(ht->array[i]->key, key) == 0)
return (ht->array[i]->value);
}
}
else
return (NULL);
i++;
}
}
else
return (NULL);
return (NULL);
}
