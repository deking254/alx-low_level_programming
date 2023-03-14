#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - check the code
 * @grid: integer operand.
 * @height: integer operand.
 * Return: Always int.
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
