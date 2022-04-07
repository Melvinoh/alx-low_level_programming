#include "main.h"
#include <stdlib.h>

/**
 * calloc - allocates memory for an array of a certain number
 * of elements each of an interrupted bytes 
 * @nmemb: the number of elements.
 * @size: the byte size of each array element
 *
 * Return: if nmemb = 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem =malloc(size * nmemb);

