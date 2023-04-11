#include <stdio.h>
#include <stdlib.h>

/**
 * * main - serves as entry point of the program and
 * * prints the minimum number of coins to make
 * change for an amount of money.
 * *
 * * @argc: The number of arguments passed to the program
 * *
 * * @argv: The array of strings containing the arguments
 * * Return: Always returns 0 to indicate successful execution of the program
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int cents, coins[] = {25, 10, 5, 2, 1}, num_coins = 0, i;
if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < 5 && cents > 0; i++)
{
num_coins += cents / coins[i];
cents %= coins[i];
}

printf("%d\n", num_coins);
return (0);
}
