#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	if (b<5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b)
	if  (b == 0)
		printf("Last digit of %d is %d and is 5\n", n b)
	/* your code goes there */
	return (0);
}
