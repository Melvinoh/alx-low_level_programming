#include main.h
/**
 * _memeset: function that fill n bytes of memory area pointed to by s
 * @b consonant byte 
 * @*s variable holding memory spacce 
 */
 
char *memset(char *s, char b, unsigned int  n)
{
	int i;
	for (i = 0, i < n, i++)
	{
		s[i] = b;
	}
	return (s);
}
	

