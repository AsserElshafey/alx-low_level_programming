#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a grid based on height and width
 * @width: An integer
 * @height: An integer
 * Return: A pointer to the begining of the string
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **heap_array;

	/* Checking for negatives*/
	if (width <= 0 || height <= 0)
		return (NULL);
	/*Allocating memory for rows*/
	heap_array = malloc(sizeof(int *) * height);
	if (heap_array == NULL)
		return (NULL);
	/*Allocating memory for each collum*/
	for (i = 0; i < height; i++)
	{
		heap_array[i] = malloc(sizeof(int) * width);
		if (heap_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(heap_array[j]);
			}
			free(heap_array);

		}

	}
	/*Initializing the array*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			heap_array[i][j] = 0;
		}
	}
	return (heap_array);
}
