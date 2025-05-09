#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Description: This function allocates memory for an array of chars of
 *              the given size and initializes each element with the
 *              specified character. If size is 0 or memory allocation
 *              fails, the function returns NULL.
 *
 * Return: Pointer to the initialized array, or NULL on failure.
 */


char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}

