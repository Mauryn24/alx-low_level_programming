#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ne;
	listint_t *temp = *head;

	ne = malloc(sizeof(listint_t));

	if (!ne || !head)
		return (NULL);
	ne->n = n;
	ne->next = NULL;

	if (idx == 0)
	{
		ne->next = *head;
		*head = ne;
		return (ne);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			ne->next = temp->next;
			temp->next = ne;
			return (ne);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
