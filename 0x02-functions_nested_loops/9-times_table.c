#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{
	int i, j, k, answer;
	
	for (i = 0; i <= 9; i++) /* Outer loop for rows */
	{
		answer = k = 0;
		for (j = 0; j <= 9; j++) /*Loop acts as a counter*/
		{
			answer = i * k;
			if (j == 0) /* If it's the first column */
			{
				_putchar('0'); /* Print "0" as the first element */
			}
	
			_putchar(' '); /* Print a space before each element */
	
	
			if (answer <= 9) /* If the answer is a single digit */
			{
				_putchar(' '); /* Print an additional space for alignment */
			}
	
			_putchar('0' + answer);
	
			if (j != 9) /* If it's not the last column */
			{
				_putchar(','); /* Print a comma to separate elements */
	
			}
			k++;
		}
		_putchar('\n'); /* Move to the next line for a new row */
	}
}
