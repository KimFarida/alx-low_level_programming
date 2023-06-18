#include <stdio.h>
/*
* main - entry point
* Description: Write a program that finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
* Return: 0
*/


int main(void)
{
	unsigned long a = 0; /* First Fibonacci number */
	unsigned long b = 1; /*  Second Fibonacci number */

	int i = 0;
	unsigned long sum = 0;

	while (i <= 98)
	{
		sum = a + b; /* Fibonacci number as the sum of the previous two numbers */
		printf("%u", sum);
		if (i != 98)
		{
			printf(", ");
		}
		a = b;
		b = sum;
		i++;
	}
	printf("\n");
}
