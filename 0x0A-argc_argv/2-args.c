#include <stdio.h>

/**
* main - serves as entry point of the program and
* prints all  arguments passed to the program
*
* @argc: The number of arguments passed to the program
*
* @argv: The array of strings containing the arguments
* Return: Always returns 0 to indicate successful execution of the program
*/

int main(int argc __attribute__((unused)), char *argv[])
{
char **arg = argv;
while (*arg != NULL)
{
printf("%s\n", *arg++);
}
return (0);
}
