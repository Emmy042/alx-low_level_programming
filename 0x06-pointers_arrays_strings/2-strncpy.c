#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Pointer to the buffer where the string is copied to.
 * @src: Pointer to the source string to copy from.
 * @n: Maximum number of bytes to copy from src.
 *
 * Description: This function copies at most n bytes from the src string
 *              to the dest buffer. If src is less than n bytes long, the
 *              remainder of dest is filled with null bytes. Works exactly
 *              like the standard strncpy function.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
