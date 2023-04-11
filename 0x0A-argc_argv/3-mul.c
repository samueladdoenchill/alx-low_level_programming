#include <stdio.h>
#include <stdlib.h>

/**
* main - serves as entry point of the program and
* prints the sum of two numbers.
*
* @argc: The number of arguments passed to the program
*
* @argv: The array of strings containing the arguments
* Return: Always returns 0 to indicate successful execution of the program
*/

int main(int argc, char *argv[])
{
int result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
}
