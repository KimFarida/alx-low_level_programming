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
	
	/* Check if the given number is within the valid range */
	if (n > 15 || n < 0)
	return;

	/* Loop through rows of the table */
	for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j; /* Compute the multiplication */

				/* Add spaces for alignment based on the result */
				if (k <= 9 && j != 0)
				{
					printf(" ");
					printf(" ");
				}
				else if (k >= 10 && k < 100)
				{
					printf(" ");
				}
				/* Add a space before the result if it's not the first column */
				if (j != 0)
					printf(" ");
				printf("%d", k);
				/* Add a comma to separate elements if it's not the last column */
				if (j != n)
				{
					printf(",");
				}
				k++;
			}
		/* Move to the next line for a new row */
		printf("\n");

	}
}
