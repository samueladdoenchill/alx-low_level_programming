#include <stdio.h>

/**
* main - serves as entry point of the program and
* prints the number of arguments passed to the program
*
* @argc: The number of arguments passed to the program
*
* @argv: The array of strings containing the arguments
* Return: Always returns 0 to indicate successful execution of the program
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
int i;
if (argc == 1)
{
printf("%d\n", 0);
}
else
{
printf("%d\n", argc - 1);
return (0);
}
