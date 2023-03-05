#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - A program that prints a single digit of base 10 to 0
 * Return: Always (Success)
 *
 */

int main(void)

{
	int myNum;

	for (myNum = '0'; myNum <= '9'; myNum++)
	putchar(myNum);
	putchar('\n');
	return (0);

}	
