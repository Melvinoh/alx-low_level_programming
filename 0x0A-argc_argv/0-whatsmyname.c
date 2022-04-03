#include <stdio.h>
/* intmain() program that prints its name and new line 
 * @argc: count for the number of arguments that a program recieve
 * @argv: array of arguments entered in program
 */

int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		argv[0] = argv[1];
		retun (argv[1]);
	}
	putchar('\n');
}
