#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments.
 * @argc: Argument count.
 * @argv: Array of argument strings.
 *
 * Description: This program multiplies two numbers provided as
 *              command-line arguments and prints the result,
 *              followed by a new line. If the number of arguments
 *              is not exactly two, it prints "Error" and returns 1.
 *
 * Return: 0 on success, 1 if incorrect number of arguments.
 */


int main(int argc, char *argv[])
{

int mul, n1, n2;
if (argc < 3)
{
printf("Error\n");
return (1);
}

n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
mul = n1 * n2;
printf("%d\n", mul);

return (0);
}
