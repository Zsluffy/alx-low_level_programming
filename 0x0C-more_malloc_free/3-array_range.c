#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array
 * @min: min range
 * @max: max range
 *
 * Return: pointer of value
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
