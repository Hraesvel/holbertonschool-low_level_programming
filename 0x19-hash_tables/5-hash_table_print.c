#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, i;
	hash_node_t *node;

	idx = i = 0;

	printf("{");
	while (idx < ht->size)
	{
		node = ht->array[idx];
		if (ht->array[idx++])
		{
			printf("\'%s\': \'%s\'",node->key, node->value);
			i = idx + 1;
			while (i < ht->size)
			{
				if (ht->array[i++])
				{
					printf(", ");
					break;
				}
			}
		}
	}
	printf("}\n");
}
