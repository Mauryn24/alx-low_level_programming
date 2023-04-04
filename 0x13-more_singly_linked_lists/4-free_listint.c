#include "lists.h"

/**
 * free_listint - frees nodes of a list
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	/*eclare a pointer to the a pointer*/
	listint_t *a;

	/*Traverse the list, freeing each node as we go*/
	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}
