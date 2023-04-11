#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * * main - serves as entry point of the program and
 * * prints the sum of two numbers.
 * *
 * * @argc: The number of arguments passed to the program
 * *
 * * @argv: The array of strings containing the arguments
 * * Return: Always returns 0 to indicate successful execution of the program
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
char *arg;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
arg = argv[i];
for (j = 0; arg[j] != '\0'; j++)
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(arg);
}

printf("%d\n", sum);

return (0);
}
