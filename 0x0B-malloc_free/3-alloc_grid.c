#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of ints
* @width: the width of the array
* @height: the height of the array
* Each element of the grid should be initialized to 0
* The function should return NULL on failure
* Return: If width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
int w, h, j, i;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* if memeory allocation fails, free previously allocated memory */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}
/* Initialize all elements to 0 */
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
grid[h][w] = 0;
}
return (grid);
}
