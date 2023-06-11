#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - check the code
 * @ht: table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;
if (ht)
{
while (i < ht->size)
{
free(ht->array[i]);
i++;
}
}
}
