#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 * Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 */

int main(void)
{
	long a = 0; /* First Fibonacci number */
	long b = 1; /*  Second Fibonacci number */

	int i = 0;
	long sum = 0;

	while (i < 50)
	{
		sum = a + b; /* Fibonacci number as the sum of the previous two numbers */
		printf("%ld", sum);
		if (i != 50)
		{
			printf(", ");
		}
		a = b;
		b = sum;
		i++;
	}
	printf("\n");
	return(0);
}
