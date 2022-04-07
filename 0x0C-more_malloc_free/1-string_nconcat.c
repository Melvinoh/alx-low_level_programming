#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -concentrares two strings using at
 * most an interapted number of bytes
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximum number of bytes to concentrate to 1 
 *
 * Retun: null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n,index;


