#include <stdio.h>
/**
 * main - prints all possible combination of two digit number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
	{
		if (i < j)
		{
			putchar((i / 10) + 0);
			putchar((i % 10) + 0);
			putchar(' ');
			putchar((j / 10) + 0);
			putchar((i % 10) + 0);
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
