#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/**
 * main - main functon that generates a random number n
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	int n;

	srand(time(0));

	n= rand() - RAND_MAX / 2;

	if (n > 0)
	{
	
		printf("%d is postive\n", n);
	}

	else if (n < 0)
	{
	
		printf("%d is negative\n", n);
	}

	else
	{
	
		printf("%d is zero\n", n);
	}

	return (0);
}
