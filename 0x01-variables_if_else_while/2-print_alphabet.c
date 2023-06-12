#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print alphabets
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
