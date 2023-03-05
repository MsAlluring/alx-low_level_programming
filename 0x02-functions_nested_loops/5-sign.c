#include "main.h"

/**
 * abs - a function that prints the sign of a number
 * @c: the number to be computed
 * Return: absolute valus or zero
 */

int print_sign(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
