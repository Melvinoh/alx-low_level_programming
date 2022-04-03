#include <stdio.h>
/**
 * a program that writes positive numbers
 * int main(): adds arguments of positive numbers a
 * @argc; argument count 
 * @argv: an array for arguments
 * @i: incremental number
 * @sum: anser to int main
 */

int main(int argc, char *argv)
{
	int i;
	int sum;

	for (i = 0; i < argc; i++)
	{
		sum += sum + argv[i];
	
		_putchar( argv[i]);
		_putchar( sum);
	}
}
