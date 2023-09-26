#include "lists.h"

/**
 * add_nodeint - it adds a node to the beginning of a linked list
 * @head: the head of the list pointer
 * @n: the integer to be used as content
 *
 * Return: the newly added node address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  /* Creates a new node with the given value. */
listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)

	{
		return (NULL);
	}
	new_node->n = n;

	/* Adds the new node to the beginning of the list. */
	new_node->next = *head;
*head = new_node;

/* Returns the address of the new node. */
return (new_node);
}
