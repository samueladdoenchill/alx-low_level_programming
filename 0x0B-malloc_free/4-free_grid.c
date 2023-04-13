#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated for the grid
 * which was created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */


void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL) {
        return;
    }

    for (i = 0; i < height; i++) {
        if (grid[i] != NULL) {
            free(grid[i]);
        }
    }

    free(grid);
}

