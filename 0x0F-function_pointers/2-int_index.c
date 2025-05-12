#include <stdio.h>
#include <stddef.h>

/**
 * int_index - Searches for an integer using a comparison function.
 * @array: Array to search.
 * @size: Number of elements in the array.
 * @cmp: Function to compare values.
 *
 * Return: Index of first matching element, or -1 if none or on error.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

int i;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}

}
return (0);
}
