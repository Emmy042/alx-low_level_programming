#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */


void free_dlistint(dlistint_t *head)

{

dlistint_t *temp;

while (head)
{
temp = head->next; /* store next node */
free(head);        /* free current node */
head = temp;       /* move to next node */
}

}