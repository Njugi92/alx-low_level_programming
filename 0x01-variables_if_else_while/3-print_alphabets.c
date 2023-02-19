#include <stdio.h>

/**
 * main - print alphabets in lower and upper case
 * Return: 0 (success)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		putchar(d);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
