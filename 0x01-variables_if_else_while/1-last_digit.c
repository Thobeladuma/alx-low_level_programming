#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastn = n % 10;

	if (lastn > 5)
		printf("Last digit of %d is greater than 5\n", lastn);
	else if (lastn == 0)
		printf("Last digit of %d and is 0\n", lastn);
	else
		printf("Last digit of %d is less than 6 and not 0\n", lastn);

	return (0);
}
