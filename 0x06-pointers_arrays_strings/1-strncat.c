#include "main.h"
/**
 * _strncat - concatenates n bytes from string to other
 * @dest: string to be appeded to
 * @src: string to add
 * @n: bytes from src
 * Return: apointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
		while (src[j] != '\0' && j < n)
		{
		dest[i] = src[j];
		i++;
		j++
		}
	}

	dest[i] = '\0';
