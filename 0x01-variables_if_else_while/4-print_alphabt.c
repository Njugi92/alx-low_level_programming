#include <stdio.h>

/**
 * main - print alphabets in lower case followed by new line, except 'e' and 'q'
 * Return: 0 (success)
 */
int main(void)
{
	char la;
	
	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	
	}

	putchar('\n');

	return (0);
}
