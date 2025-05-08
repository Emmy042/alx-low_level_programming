#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended to dest.
 *
 * Description: This function appends the src string to the dest string,
 *              overwriting the terminating null byte (\0) at the end of
 *              dest, and then adds a new terminating null byte. The
 *              resulting string is stored in dest.
 *
 * Return: Pointer to the resulting string dest.
 */


char *_strcat(char *dest, char *src)
{

strcat(dest, src);

return (dest);
}

