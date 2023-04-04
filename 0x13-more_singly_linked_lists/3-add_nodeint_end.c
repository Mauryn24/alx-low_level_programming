#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end
 * @head: a pointer to a pointer to the head of the list
 * @n: an integer value to be added to the new node
 * Return: address of new node else return NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	/*memory allocation*/
	if (a == NULL)
		return (NULL);

	/* Initialize the new node*/
	a->n = n;
	a->next = NULL;

	/* If the list is empty, the new node becomes the head*/
	if (*head == NULL)
		*head = a;
	else
	{
	/* Traverse the list to find the last node*/
		listint_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		/* Add the new node to the end of the list*/
		current->next = a;
	}
}
