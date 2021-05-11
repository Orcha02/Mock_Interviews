#include <stdio.h>
/*
 * main - FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int n;

	printf("1");
	for (n = 2; n <= 100; n++)
	{
		if (((n % 3) == 0 && ((n % 5) == 0)))
			printf(" %s", "FizzBuzz");
		else if ((n % 3) == 0)
			printf(" %s", "Fizz");
		else if ((n % 5) == 0)
			printf(" %s", "Buzz");
		else
			printf(" %d", n);
	}
	printf("\n");
	return (0);
}
