#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char n, i;
n = '0';
i = 'a';

while (n <= '9')
{
putchar(n);
n++;
}

while (i <= 'f')
{
putchar(i);
i++;
}
putchar('\n');

return (0);
}
