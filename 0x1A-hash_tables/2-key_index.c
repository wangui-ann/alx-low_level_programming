#include "hash_tables.h"

/**
 * keyindex - hash function generates a djb2
 * @str: pointer to chars a hash
 * Return: hash key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
