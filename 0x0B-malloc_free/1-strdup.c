#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the given string.
 * @str: The string to duplicate.
 *
 * Description: This function allocates memory for a new string which
 *              is a duplicate of the input string. It copies the content
 *              of str into the newly allocated space. If str is NULL or
 *              memory allocation fails, it returns NULL.
 *
 * Return: Pointer to the duplicated string, or NULL on failure.
 */


char *_strdup(char *str)
{
char *dup;
unsigned int i = 0, len = 0;

if (str == NULL)
return (NULL);
/* Calculate length of the string */
while (str[len] != '\0')
len++;

/* Allocate memory including space for null terminator */
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

/* Copy characters */
for (; i < len; i++)
dup[i] = str[i];

dup[i] = '\0'; /* Null-terminate the new string */

return (dup);
}

