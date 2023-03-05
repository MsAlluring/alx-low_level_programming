#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - A program that prints all numbers to 16 base
 * Return: Always (Success)
 *
 */

int main(void)

{
	int a;
	char low;
	
	for (a = '0'; a <= '9'; a++)
	putchar(a);
	
	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	
	return (0);

}	
