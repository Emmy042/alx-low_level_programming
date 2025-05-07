#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: The character to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _isalpha(int c)
{

if (isalpha(c))
{
return (1);
}
else
{
return (0);

}

}
