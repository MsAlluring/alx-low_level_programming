#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - prints the last digit of the number  stored in variable n
 * Return: Always (Success)
 */

int main(void)

{
	int n, lastd;

	scrand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
	print("last digit of %d is %d and it is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("last digit of %d is %d and it is equal to zero\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("last digit of %d is %d and it is less than 6 and not equal to zero\n", n, lastd);
	}
	return (0);
}
