#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the head of the list.
 * @n: Integer to store in the new node.
 *
 * Return: Address of the new element, or NULL on failure.
 */


listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *new_node;

if (n < 0)
{
return (NULL);
}

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = *head;
*head = new_node;

return (new_node);


}
