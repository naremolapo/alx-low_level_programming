#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees 2d array
* @grid: 2d grid
* @height: height dimension of grid
* Description: frees memory of grid
* Return: nothing
*
*/
Void free_grid(int **grid, int height)
{
int i;

for (x = 0; x < height; x++)
{
free(grid[i]);
}
free(grid);
}