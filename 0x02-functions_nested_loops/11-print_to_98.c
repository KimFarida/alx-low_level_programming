#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n : number to start from
 * Return:0 or 1
 */


void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d", i);
		printf(", ");
	}

	for (i = n; i > 98; i--)
	{
		printf("%d", i);
		printf(", ");
	}
	printf("98");
	printf("\n");
}
