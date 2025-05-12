#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Array to iterate over.
 * @size: Size of the array.
 * @action: Function to apply to each element.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{

int i;
for (i = 0; i < (int)size; i++)
{
action(array[i]);
}
}
