#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 , 0 otherwise
 */

int _isdigit(int c)
{

if (isdigit(c))
{
return (1);
}
else
{
return (0);

}

}
