#include <stdio.h>
/**
 * program that prints all arguments it recieve
 * int main() - prints arguments
 * @argc: argument count
 * @argv: array of arguments
 * return: always (0)
 */ 

int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(argv[i]);

	}
	_putchar('\n');
	return (0);
}
