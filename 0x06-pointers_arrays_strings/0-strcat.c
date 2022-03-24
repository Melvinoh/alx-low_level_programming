#include "main.h"
/**
 * _strcat - concentrate two strings
 * @dest: string to append to
 * @src: string to add
 * overwritting the terminating null byte \0
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0, dest[i] != '\0', i++)
	{
		for (j = 0, src[j] != '\0', j++)
		{
			dest[i] = src[j];
			dest[i] = '\0';
		}
	}

	return (dest);
}
