#include "main.h"

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **kit, z, y;

	kit = malloc(sizeof(*kit) * height);

	if (height <= 0 || width <= 0 || kit == 0)
	{
		return (NULL);
	}
	else
	{
		for (z = 0; z < height; z++)
		{
			kit[z] = malloc(sizeof(**kit) * width);
			if (kit[z] == 0)
			{
				/*Free everything if malloc fails*/
				while (z--)
					free(kit[z]);
				free(kit);
				return (NULL);
			}
			for (y = 0; y < width; y++)
				kit[z][y] = 0;
		}
	}

	return (kit);
}
