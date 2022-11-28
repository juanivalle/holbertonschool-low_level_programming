#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key in a hash
 * @key: key passed
 * @size: size of the hash tables
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
