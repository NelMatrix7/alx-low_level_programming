#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char hexNum1 = '0';

	while (hexNum1 <= '9')
	{
		putchar(hexNum1);
		hexNum1++;
	}

	char hexNum2 = 'a';

	while (hexNum2 <= 'f')
	{
		putchar(hexNum2);
		hexNum2++;
	}

	putchar('\n');
	return (0);
