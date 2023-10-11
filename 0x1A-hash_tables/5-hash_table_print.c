#include "hash_tables.h"
/**
 * hash_table_print - The function prints the hash table
 * @ht: This is a pointer to the hash table to print
 *
 * Description: key/value pairs are printed in order
 * they appear in hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int j;
unsigned char comma_flag = 0;

if (ht == NULL)
return;

printf("{");
for (j = 0; j < ht->size; j++)
{
if (ht->array[j] != NULL)
{
if (comma_flag == 1)
printf(", ");

node = ht->array[j];
while (node != NULL)
{
printf("'%s' : '%s'", node->key, node->value);
node = node->next;
if (node != NULL)
printf(", ");
}
comma_flag = 1;
}
}
printf("}\n");
}