#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;

	if (size > 0)
	{
		ht = malloc(sizeof(shash_table_t));
		if (!ht)
			return (NULL);
		ht->array = malloc(size * sizeof(shash_node_t *));
		if (!ht->array)
			return (NULL);
		ht->size = size;
		ht->shead = NULL;
		ht->stail = NULL;
	}
	return (ht);
}
/**
 * add_node - adds a new node at a specific index in a hash table
 * @head: head of linked list at specified index in a hash table
 * @key: element's key
 * @value: element's value
 *
 * Return: address of new node
 */
shash_node_t *add_node(shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *new, *temp = *head;

	new = malloc(sizeof(shash_node_t));
	if (!new)
		exit(0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		exit(0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		exit(0);
	}
	new->sprev = NULL;
	new->snext = NULL;
	new->next = temp;
	*head = new;
	return (new);
}

/**
 * sort_table - sort hash table
 * @ht: hash table
 * @new: new node
 *
 * Return: nothing
 */
void sort_table(shash_table_t *ht, shash_node_t *new)
{
	unsigned long int i = 0;
	char *key = new->key;
	shash_node_t *current;

	for (current = ht->shead; current; current = current->snext, i = 0)
	{
		if (current->key[i] == key[i])
			for (i = 0; current->key[i] && key[i]; i++)
				if (current->key[i] != key[i])
					break;
		if (current->key[i] > key[i])
		{
			new->snext = current;
			new->sprev = current->sprev;
			if (current->sprev)
				current->sprev->snext = new;
			else
				ht->shead = new;
			current->sprev = new;
			return;
		}

		if (current->key[i] < key[i] && (!current->snext ||
					current->snext->key[i] > key[i]))
		{
			new->sprev = current;
			new->snext = current->snext;
			if (current->snext)
				current->snext->sprev = new;
			else
				ht->stail = new;
			current->snext = new;
			return;
		}
	}
}

/**
 * update_key - check if key exists and updated is value
 * @index: index to check for key;
 * @key: key to check for
 * @value: associated with key
 *
 * Return: 1 on success, 0 on failure
 */
int update_key(shash_node_t **index, const char *key, const char *value)
{
	shash_node_t *temp = *index;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}

/**
 * shash_table_set - adds or updates an element in hash table
 * @ht: hash table to sort
 * @key: element's key
 * @value: element's value
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;

	if (!ht || !value || !key || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (update_key(&(ht->array[index]), key, value))
		return (1);
	new = add_node(&(ht->array[index]), key, value);

	if (!ht->shead && !ht->stail)
	{
		ht->shead = ht->array[index];
		ht->stail = ht->array[index];
	}
	else
	{
		sort_table(ht, new);
	}
	return (1);
}

/**
 * shash_table_get - retrieve the value associated with a certain key
 * @ht: hash table to search
 * @key: search key
 *
 * Return: value if key exists, NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (temp)
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints elements of hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *del = "";

	if (!ht)
		return;
	temp = ht->shead;
	printf("{");
	while (temp)
	{
		printf("%s'%s': '%s'", del, temp->key, temp->value);
		del = ", ";
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints elements of hash table in reverse
 * @ht: hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *del = "";

	if (!ht)
		return;
	printf("{");
	temp = ht->stail;
	while (temp)
	{
		printf("%s'%s': '%s'", del, temp->key, temp->value);
		del = ", ";
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes sorted hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *next;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}
	free(ht->array);
	free(ht);
}
