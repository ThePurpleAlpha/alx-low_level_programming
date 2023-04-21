#include <stdio.h>
/**
 * main - prints the lower case alphabet in reverse
 * followed by a new line
 * return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
		return (0);
}
