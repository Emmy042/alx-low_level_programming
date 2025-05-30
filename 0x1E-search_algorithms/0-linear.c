#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using linear search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is found, or -1 if not found or NULL
 */


int linear_search(int *array, size_t size, int value)
{


size_t i;

i = 0;



while (i < size)
{

printf("value checked array [%ld] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return(i);
break;
}


i++;
}


if (array == NULL || *array != value)
{

return (-1);

}

return (0);

}
