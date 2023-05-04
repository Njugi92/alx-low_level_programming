#include "main.h"
/**
 * set_bit - It sets a one bit at a given index
 * @n: This is pointer to the number to change
 * @index: The index to the bit to set to 1
 * Return: 1 (success), -1 (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
