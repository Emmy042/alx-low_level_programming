#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head of the list.
 * @n: Integer to store in the new node.
 *
 * Return: Address of the new element, or NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new_node, *temp;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;


return (new_node);


}
