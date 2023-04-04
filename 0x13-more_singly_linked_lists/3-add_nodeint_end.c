#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*Declare pointers to the new node, the last*/
	/*node in the list, and the head of the list*/
	listint_t *a;
	listint_t *temp = *head;

	/*allocate memory for new node*/
	a = malloc(sizeof(listint_t));
	/*if memory allocation fails return NULL*/
	if (a == NULL)
		return (NULL);

	/*initialize the new node with the data and*/
	/*a NULL pointer to the next node*/
	a->n = n;
	a->next = NULL;

	/*If the list is empty, the new node becomes the head*/
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	/*Traverse the list to find the last node*/
	while (temp->next)
		temp = temp->next;

	/*Add the new node to the end of the list*/
	temp->next = a;

	/*Return a pointer to the new node*/
	return (a);
}

