#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * and sets the head pointer to NULL
 * @head: double pointer to the first element in the list
 */
void free_listint2(listint_t **head)
{
	/* Declare a pointer to the current node*/
	listint_t *current;

	if (head == NULL)
		return (NULL);
	/* Traverse the list, freeing each node as we go*/
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	/*Set the head pointer to NULL*/
	*head = NULL;
}