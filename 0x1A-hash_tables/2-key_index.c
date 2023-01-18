#include "hash_tables.h"

/**
 * keyindex - hash function
 * @str: pointer to chars a hash
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
