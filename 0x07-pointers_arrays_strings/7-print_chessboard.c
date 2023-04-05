#include "main.h"
/**
 * print_chessboard - prints a chessboard
 *
 * @board: A pointer to the pieces to be printed.
 * Return: void
 **/
void print_chessboard(char (*board)[8])
{
for (int row = 0; row < 8; row++)
{
for (int col = 0; col < 8; col++)
{
putchar(board[row][col]);
}
putchar('\n');
}
}
