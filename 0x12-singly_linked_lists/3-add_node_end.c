#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to store in the new node.
 *
 * Return: Address of the new element, or NULL on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *new_node;

if (str == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

while (new_node->next != NULL)
{
new_node = new_node->next;
}

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;

return (new_node);

}
