#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int check_digit(char *s);
int len_string(char *s);
void mis(void);

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
char *ptr_1, *ptr_2;
int size1, size2, size, i, add, num1, num2, *answer, all = 0;

if (argc != 3 || !check_digit(argv[1]) || !check_digit(argv[2]))
mis();

ptr_1 = argv[1];
ptr_2 = argv[2];

size1 = len_string(ptr_1);
size2 = len_string(ptr_2);
size = size1 + size2 + 1;

answer = malloc(sizeof(int) * size);
if (!answer)
return (1);

for (i = 0; i <= size1 + size2; i++)
answer[i] = 0;

for (size1 = size1 - 1; size1 >= 0; size1--)
{
num1 = ptr_1[size1] - '0';
add = 0;

for (size2 = len_string(ptr_2) - 1; size2 >= 0; size2--)
{
num2 = ptr_2[size2] - '0';
add += answer[size1 + size2 + 1] + (num1 *num2);
answer[size1 + size2 + 1] = add % 10;
add /= 10;
}

if (add > 0)
answer[size1 + size2 + 1] += add;
}

for (i = 0; i < size - 1; i++)
{
if (answer[i])
all = 1;

if (all)
putchar(answer[i] + '0');
}

if (!all)
putchar('0');

putchar('\n');
free(answer);
return (0);
}


/**
 * check_digit - Checks if a string is composed entirely of digits.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is composed entirely of digits, 0 otherwise.
 */

int check_digit(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * len_string - Calculates the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int len_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * mis - Prints an error message and exits the program.
 */

void mis(void)
{
printf("Error\n");
exit(98);
}
