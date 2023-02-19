#include <stdio.h>

/**
 * main - print alphabets except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
	if (f != 'e' && f != 'q')
		putchar(f);
	}
	putchar('\n');
	return (0);
}
