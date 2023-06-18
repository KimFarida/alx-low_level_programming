#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int i;
	
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}

	for (i = n; i >= 98; i--)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
