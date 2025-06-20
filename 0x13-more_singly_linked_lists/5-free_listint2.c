#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to pointer to the head of the list
 */
void free_listint2(listint_t **head)
{

listint_t *temp;

if (head == NULL || *head == NULL)
return;

while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;

}

