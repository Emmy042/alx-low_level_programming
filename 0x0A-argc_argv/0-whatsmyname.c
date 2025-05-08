#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: Argument count.
 * @argv: Array of argument strings.
 *
 * Description: This program prints its name followed by a new line.
 *              If the program is renamed, it prints the new name
 *              (including the path) without needing recompilation.
 *
 * Return: Always 0 (Success).
 */


int main(int argc, char *argv[])
{

if (argc == 1)
{
printf("%s\n", argv[0]);
}

return (0);
}
