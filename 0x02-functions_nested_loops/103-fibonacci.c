#include <stdio.h>
/*
* By considering the terms in the Fibonacci sequence
* whose values do not exceed 4,000,000,
* write a program that finds and prints the sum of the even-valued terms,
* followed by a new line.
*/

int main(void)
{
	long a, b, i, sum, even_sum;

	a = 0;
	b = 1;
	i = sum = even_sum = 0;

	while (i < 4000000)
	{
		sum = a + b;
		if (sum % 2 == 0)
		{
			even_sum += sum;
		}
		a = b;
		b = sum;
		i = sum;
	}
	printf("%ld", even_sum);
	printf("\n");
	return (0);
}
