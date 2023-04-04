#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to head pointer of link
 * @index: nth node
 * Return: nth node, or NULL if it fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;

	if (head == NULL)
		return (NULL);

	while ((b < index) && head != NULL)
	{
		head = head->next;
		b++;
	}

	/*check if index was within size*/
	if (b == index)
		return (head);

	return (NULL);
}
