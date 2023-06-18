#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print to 98
 * @n : number to start from
 * Return:0 or 1
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
	return;

	for (i = 0; i <= n; i++)
		{
		j = 0;
		printf("%d,", j);
		for (j = 1; j <= n; j++)
		{
			k = i * j;
			if (k <= 9 && j != 0)
			{
				printf(" ");
				printf(" ");
			}
			else if (k >= 10 && k < 100)
			{
				printf(" ");
			}
			printf(" ");
			printf("%d", k);
			if (j != n)
			{
				printf(",");
			}
			k++;
		}
		printf("\n");

	}
}
