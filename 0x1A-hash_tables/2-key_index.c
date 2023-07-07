#include "hash_tables.h"

/**
 * key_index - The function gets the index at which
 * a key/value pair should be stored in array of
 * hash table.
 * @key: key to get index of.
 * @size: size of the array of hash table.
 * Return: The index of the key
 * Description: use djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
