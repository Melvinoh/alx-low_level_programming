#include "main.h"
/**
 * _pow_recursion - function that retrund value of x raised to power of y
 * @x: value to be raised
 * @y: exponent
 * return : x ^ y or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return(1);
	if (y == 0)
		return(1);
	return (x * _pow_recursion(x, y - 1));
}
