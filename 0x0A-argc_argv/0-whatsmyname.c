#include <stdio.h>

/**
* main - serves as entry point of the program and
*  prints the name of the program
* @argc: The number of arguments passed to the program
*
* @argv: The array of strings containing the arguments
* Return: Always returns 0 to indicate successful execution of the program
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
