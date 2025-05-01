#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - gives the absolute value of a number
 * @n: The character to check
 *
 * Return: returns the final result
 */

int print_last_digit(int n)
{
int result;
result = n % 10;

putchar(result + '0');

return (result);
}
