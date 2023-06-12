#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a two-dimensional grid previously allocated.
 * @grid: The address of the two-dimensional grid.
 * @height: The height of the grid.
 * 
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}
