#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int argc, char *argv[], int num_bytes);

/**
 * main - prints the opcodes of its own function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int num_bytes;
if (argc != 2)
{
printf("Error\n");
exit(1);
}

num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes(argc, argv, num_bytes);
return (0);
}

/**
 * print_opcodes - prints the opcodes of a given function
 * @argc: number of arguments
 * @argv: array of arguments
 * @num_bytes: number of bytes to print
 */

void print_opcodes(int argc, char *argv[], int num_bytes)
{
int i;
char *ptr_h = (char *) main;
for (i = 0; i < num_bytes; i++)
{
if (i == num_bytes - 1)
{
printf("%02hhx\n", ptr_h[i]);
break;
}
printf("%02hhx ", ptr_h[i]);
}
}
