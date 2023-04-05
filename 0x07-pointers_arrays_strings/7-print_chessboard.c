#include "main.h"
/**
 * print_chessboard - prints a chessboard
 *
 * @board: A pointer to the pieces to be printed.
 * Return: void
 **/
void print_chessboard(char (*board)[8])
{
int i, j;
i = 0;
while (i < 8)
{
for (j = 0; j < 8; j++)
_putchar(a[i][j]);
_putchar('\n');
i++;
}
}
