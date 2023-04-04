#include "lists.h"

/**
 * *add_nodeint - adds new node at
 * the beginning of a node
 * @head: a pointer to a pointer to the head of the list
 * @n: an integer value to be added to the new node
 * Return: address of the new node else return NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	/*allocate memory for new node*/

	if (new_node == NULL)
		return (NULL);
	/*if memory allocation fails return NULL*/

	new_node->n = n;
	/*new node initialized to n*/
	new_node->next = *head;
	/*next pointer is set to point to current head*/
	/*of list which is pointed to by head pointer*/
	*head = new_node;
	/*updating head to point to the new node*/

	return (new_node);
}
