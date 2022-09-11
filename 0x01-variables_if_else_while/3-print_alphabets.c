#include <stdio.h>

/**
 * main - letters
 * Description: aphabet in lower
 * Return: zero
 */
int main(void)
{
	int i, j;

	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
