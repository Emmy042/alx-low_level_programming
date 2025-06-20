#include <stdio.h>
#include <string.h>

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Description: This function copies `n` bytes from the memory
 * area pointed to by `src` to the memory area pointed to by `dest`.
 *
 * Return: Pointer to the destination memory area (`dest`)
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{

return (memcpy(dest, src, n));

}
