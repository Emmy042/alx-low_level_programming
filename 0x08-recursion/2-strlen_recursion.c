#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Description: This function calculates the length of a string
 *              recursively by counting each character until the
 *              null terminator is reached.
 *
 * Return: The length of the string as an integer.
 */


int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));

}
