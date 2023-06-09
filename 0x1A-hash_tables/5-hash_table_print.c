#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print- check the code
 * @ht: ht
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
unsigned long int j = 0;
if (ht)
{
printf("{");
if (ht->array)
{
while (j < ht->size)
{
if (ht->array[j])
i++;
j++;
}
j = 0;
while (j < ht->size)
{
if (ht->array[j])
{
printf("'%s': '%s'", ht->array[j]->key, ht->array[j]->value);
if (i > 1)
printf(", ");
i--;
}
j++;
}
printf("}\n");
}
}
}
