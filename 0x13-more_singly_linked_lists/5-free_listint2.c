#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * and sets the head pointer to NULL
 * @head: double pointer to the first element in the list
 */
void free_listint2(listint_t **head)
{
	/* Declare a pointer to the b node*/
	listint_t *b;

	if (head == NULL)
		return (NULL);
	/* Traverse the list, freeing each node as we go*/
	while (*head)
	{
		b = *head;
		*head = (*head)->next;
		free(b);
	}

	/*Set the head pointer to NULL*/
	*head = NULL;
}
