#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "betty", "coou");
    hash_table_set(ht, "hetairas", "ert");
    hash_table_set(ht, "mentioner", "yuou");
    hash_table_set(ht, "heliotropes", "nrospora");
    hash_table_set(ht, "neurospora", "yuou");
    hash_table_set(ht, "", "");
    printf("%s\n", ht->array[0]->next->key);
    return (EXIT_SUCCESS);
}
