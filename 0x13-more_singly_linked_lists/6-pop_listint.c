#include "lists.h"

/**
 * pop_listint - deletes head of a node
 * @head: double pointer to the first element in the list
 * Return: head's node data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	/*declare a variable to hold the head's node data*/
	int data;

	/*check if list is empty*/
	if (*head == NULL)
		return (0);
	/*Store the head node's data and move the head pointer to the next node*/
	data = *head->n;
	*head = *head->next;

	/*free the original head*/
	free(*head);

	/*return nodes data*/
	return (data);
}
