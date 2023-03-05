#include <stdio.h>

/**
 * main - A program that prints all the alphabet excluding q and e
 * Return: Always (Success)
 *
 */

int main(void)

{
	char let, e, q;
	
	e = 'e';
	q = 'q';

	for (let = 'a'; let <= 'z'; let++)
	{
	if (let != e && let != q)
	putchar(let);
	}
	putchar('\n');
	return (0);
}
