#include "main.h"
/**
 * print_chessboard - prints a chessboard
 *
 * @a: A pointer to the pieces to be printed.
 * Return: void
 **/
void print_diagsums(int *a, int size)
{
int x, sum1 = 0, sum2 = 0;
for (x = 0; x < size; x++)
{
sum1 += a[x];
sum2 += a[size - x - 1];
a += size;
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
