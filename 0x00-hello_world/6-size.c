#include <stdio.h>

/**
* main - Entry Point
* this program prints the size of all data types
* Return : Always 0 (success)
*/

int main(void)
{

printf("size of int = %zu\n", sizeof(int));
printf("size of float = %zu\n", sizeof(float));
printf("size of long int  = %zu\n", sizeof(long int));
printf("size of char = %zu\n", sizeof(char));
printf("size of unsigned long int = %zu\n", sizeof(unsigned long int));

return (0);
}
