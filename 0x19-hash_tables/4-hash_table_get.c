#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	
	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx])
		return ((ht->array[idx])->value);
	else
		return (NULL);
}
