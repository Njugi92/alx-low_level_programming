#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the number to start printing from
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	printf("%d, ", n);
	}
	}
	}


