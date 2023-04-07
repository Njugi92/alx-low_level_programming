#include "main.h"

/**
 * get_endless - checks if machine is little or big endian
 * Return: 0 (big) or 1 (little)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) & i;

	return (*c);
}
