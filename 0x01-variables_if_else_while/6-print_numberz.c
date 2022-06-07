#include <stdio.h>
/**
 * main - main block
 * Description:This program prints all single digit of base 10
 * straight up to a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
