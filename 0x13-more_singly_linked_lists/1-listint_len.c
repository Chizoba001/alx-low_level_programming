#include "lists.h"

/**
 *listint_len - the number of nodes in a linked list
 *@h: the head of the list
 *
 *Return: number of elements
 */
/* Returns the number of nodes in the linked list. */
size_t listint_len(const listint_t *h)
{
	/* Counts the number of nodes in the list. */
	size_t count = 0;

  /* Traverses the list, counting the nodes. */
	while (h != NULL)
	{
	count++;
	h = h->next;
	}

  /* Returns the number of nodes in the list. */
	return (count);
}
