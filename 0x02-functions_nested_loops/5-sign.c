#include "main.h"

/**
 * _abs - a function that prints the sign of a number
 * @c: the number to be computed
 * Return: absolute number of number or zero
 */

int print_sign(int n)

{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
