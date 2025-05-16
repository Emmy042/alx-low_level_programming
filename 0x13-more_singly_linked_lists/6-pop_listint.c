#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 *               and returns the head node’s data (n)
 * @head: pointer to a pointer to the first node of the list
 * Return: the data (n) of the removed node, or 0 if list is empty
 */
int pop_listint(listint_t **head)
{

listint_t *temp;
int value;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
value = temp->n;
*head = temp->next;
free(temp);

return (value);
}
