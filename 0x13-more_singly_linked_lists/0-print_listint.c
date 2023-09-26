#include "lists.h"

/**
* print_listint - the elements of a linked list are all to be printed.
* @h: the lis of the head
*
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
  /* Counts the number of nodes in the list. */
	size_t count = 0;

  /* Traverses the list, printing the data of each node. */
while (h != NULL)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}

  /* Returns the number of nodes in the list. */
	return (count);
}
