#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 52 fibonnaci numbers
 * Return: Nothing!
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2;

	while (i < 56)
	{
	if (i == 0)
	printf("%1d", j);
	else if (i == 1)
	printf(", %1d", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %1d", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}





