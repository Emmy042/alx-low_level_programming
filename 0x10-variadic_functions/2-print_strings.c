#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings separated by a string.
 * @separator: String to print between strings.
 * @n: Number of strings passed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

va_list args;
unsigned int i;
char *str;
va_start(args, n);




for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}


if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}

}
printf("\n");
va_end(args);

}
