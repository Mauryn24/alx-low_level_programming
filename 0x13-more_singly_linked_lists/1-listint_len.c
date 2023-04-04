#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: pointer to head of nodes
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		elements = elements->next;
	}
	return (elements);
}
