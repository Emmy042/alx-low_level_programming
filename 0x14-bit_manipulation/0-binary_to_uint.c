#include <stddef.h>
#include <ctype.h>  
#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: Converted number, or 0 on error.
 */

unsigned int binary_to_uint(const char *b)
{

size_t i;
unsigned int result;
result = 0;


if (b == NULL || *b == '\0')
{
return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
result = result * 2 + (b[i] - '0');

}

return (result);

}
