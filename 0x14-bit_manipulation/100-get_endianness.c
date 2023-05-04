#include "main.h"
/**
 * get_endianness - This checks if the machine is big or little endian
 * Return: 0 (big) or 1 (little)
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *a = (char *) &j;

	return (*a);
}
