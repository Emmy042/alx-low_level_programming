#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements.
 */

size_t listint_len(const listint_t *h)
{

int count;
count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);


}
