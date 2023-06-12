#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - Prints a grid of integers.
 * @grid: The address of the two-dimensional grid.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: None.
 */
void print_grid(int **grid, int width, int height)
{
    int w, h;

    for (h = 0; h < height; h++)
    {
        for (w = 0; w < width; w++)
        {
            printf("%d ", grid[h][w]);
        }
        printf("\n");
    }
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;
    
    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return 1;
    }

    print_grid(grid, 6, 4);
    printf("\n");

    grid[0][3] = 98;
    grid[3][4] = 402;

    print_grid(grid, 6, 4);
    free_grid(grid, 4);

    return 0;
}
