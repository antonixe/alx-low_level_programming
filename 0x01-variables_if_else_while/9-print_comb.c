#include <stdio.h>

/**
 * main - Entry point
 * Description: possible combinations
 * Return: zero
 */

int main(void)
{
	int k;
	
	for (k = 48; k <= 57; k++)
	{
		putchar(k);
		if (k < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
