#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that fress a 2 dimensional grid previously
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
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

