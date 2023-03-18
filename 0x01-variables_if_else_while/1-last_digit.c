#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: always returns 0 (success)
 *
 * This program generates a different random number each time
 * it is run and then checks whether the generated number fits
 * which of 3 given conditions
 */
int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	v = n % 10;
	printf("Last digit of %d is %d ", n, v);
	if (v > 5)
	{
		printf("and is greater than 5\n");
	}
	if (v == 0)
	{
		printf("and is 0\n");
	}
	if ((v < 6) && (v != 0))
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
