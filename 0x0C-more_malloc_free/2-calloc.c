#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: no
 * @size: array
 *
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}