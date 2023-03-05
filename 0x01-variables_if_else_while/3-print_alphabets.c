#include <stdio.h>

/**
 * main - A program that prints alphabet in lowercase and then in uppercase
 * Return: Always (Success)
 *
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);

}
