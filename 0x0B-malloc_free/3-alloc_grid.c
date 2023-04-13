#include <stdlib.h>

/**
 *
 * alloc_grid - Creates a 2D array of integers
 * @width: Width of the matrix
 * @height: Height of the matrix
 * Return: Pointer to the newly created 2D array (Success),
 * NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0)
        return (NULL);

    int **matrix = malloc(sizeof(int *) * height);

    if (matrix == NULL)
        return (NULL);

    for (int i = 0; i < height; i++)
    {
        matrix[i] = malloc(sizeof(int) * width);

        if (matrix[i] == NULL)
        {
            for (int j = 0; j < i; j++)
                free(matrix[j]);
            free(matrix);
            return (NULL);
        }

        for (int j = 0; j < width; j++)
            matrix[i][j] = 0;
    }

    return (matrix);
}

