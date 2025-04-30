#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int n, i;
n = 0;
i = n + 1;

while (n < 9)
{
putchar(n + '0');
n++;
}
while (i <= 9)
{
putchar(i + '0');
i++;
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);

}
