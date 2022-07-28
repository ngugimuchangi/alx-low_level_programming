#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @head: head of the list
 * @key: key of the node
 * @value: value of the node
 *
 * Description: adds a new node to at begining of an index of a hash table
 *
 * Return: nothing
 */
void add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new, *temp = *head;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		exit(0);
	new->key = strdup(key);
	if (!new->key)
		exit(0);
	new->value = strdup(value);
	if (temp)
		new->next = temp;
	else
		new->next = NULL;
	*head = new;
}

/**
 * hash_table_set - adds a new element to a hash table
 * @ht: address of hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht)
		return (0);
	if (!key || (strcmp(key, "") == 0))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	add_node(&(ht->array[index]), key, value);
	return (1);
}
