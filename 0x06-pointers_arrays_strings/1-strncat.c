#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of bytes to be used from src.
 *
 * Description: This function appends the src string to the dest string,
 *              using at most n bytes from src. If src contains n or more
 *              bytes, it does not need to be null-terminated. A terminating
 *              null byte is added at the end of the result in dest.
 *
 * Return: Pointer to the resulting string dest.
 */


char *_strncat(char *dest, char *src, int n)
{

strncat(dest, src, n);
return (dest);
}
