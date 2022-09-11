#include <stdio.h>
/**
 * main - print the letters
 * Description: letters of the alphabet
 * Return: zero
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
