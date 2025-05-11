#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all parameters.
 * @n: Number of arguments.
 *
 * Return: Sum of all parameters, or 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{

va_list args;
int total;
unsigned int i;
total = 0;


va_start(args, n);

if (n == 0)
{
return (0);
}

for (i = 0; i < n; i++)
{

total += va_arg(args, int);
}
va_end(args);
return (total);


}
