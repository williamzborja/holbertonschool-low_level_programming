#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;

	if (!head || !*head) /* edge case */
		return (NULL);
	/* base case */
	if (!(*head)->next)
		return head;
	 tmp= reverse_listint(&(*head));
	 return (*head);
}
