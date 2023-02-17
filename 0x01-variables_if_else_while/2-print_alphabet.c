#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * Return: 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++);
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
