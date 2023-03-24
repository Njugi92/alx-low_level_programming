#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - prints strings, followed by new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: a variable number of strings to be printed
 * Description: if separator is NULL, it is not printed
 * if one of the strings if NULL, (nill) is printed insted
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, index++);
		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
