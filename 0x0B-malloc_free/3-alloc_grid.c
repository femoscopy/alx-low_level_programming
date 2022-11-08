#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: Pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr_arr;
	int hgt_indx, wid_indx;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr_arr = (int **) malloc(sizeof(int *) * height);

	if (ptr_arr == NULL)
		return (NULL);

	for (hgt_indx = 0; hgt_indx < height; hgt_indx++)
	{
		ptr_arr[hgt_indx] = malloc(sizeof(int) * width);

		if (ptr_arr[hgt_indx] == NULL)
		{
			for (; hgt_indx >= 0; hgt_indx--)
				free(ptr_arr[hgt_indx]);

			free(ptr_arr);

			return (NULL);
		}
	}

	for (hgt_indx = 0; hgt_indx < height; hgt_indx++)
	{
		for (wid_indx = 0; wid_indx < width; wid_indx++)
			ptr_arr[hgt_indx][wid_indx] = 0;
	}

	return (ptr_arr);
}
