#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent to which the base is raised.
 *
 * Description: This function calculates the value of x raised to the
 *              power of y recursively. If y is less than 0, the function
 *              returns -1 to indicate an error.
 *
 * Return: The result of x raised to the power of y, or -1 if y is less
 *         than 0.
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}


return (x * _pow_recursion(x, y - 1));
}
