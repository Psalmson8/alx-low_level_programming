#include "lists.h"

/**
 * free_listint - help frees a linked list
 * @head: freed listint_t lists
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
