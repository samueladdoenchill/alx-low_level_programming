#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	printf("Size of a %s: %d byte(s)\n", "char", sizeof(char));
	printf("Size of an %s: %d byte(s)\n", "int", sizeof(int));
	printf("Size of a %s: %d byte(s)\n", "long int", sizeof(long int));
	printf("Size of a %s: %d byte(s)\n", "long long int", sizeof(long long int));
	printf("Size of a %s: %d byte(s)\n", "float", sizeof(float));
	return (0);
}
