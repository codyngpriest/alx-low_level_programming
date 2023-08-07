#include "main.h"

/**
* free_grid - frees a 2 dimensional grid previously created by your
* alloc_grid function
* @grid: a pointer to a pointer
* @height: height of the grid
*
* Return: void
*/

void free_grid(int **grid, int height)
{
int i;
/* checks if grid is NULL */
if (grid == NULL)
return;

/* free memory for each row */
for (i = 0; i < height; i++)
{
free(grid[i]);
}

/* free memory for the row pointers */
free(grid);
}
