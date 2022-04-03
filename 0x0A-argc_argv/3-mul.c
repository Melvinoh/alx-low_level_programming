#include <stdio.h>
/**
 * a program that mutiplies two numbers
 * @argc:argument count
 * @argv: string of arguments
 * retun: always zero
 */
int main(int argc, char *argv);
{
	int i;
	float Ans;

	for (i = 0; i < argc; i++)
	{
		if ( i == 2)
		{
			sum = argv[1] * argv[2];
			_putchar( sum);
		}
		else
			_putchar(error);
	}
	_putchar('\n');
}

	
