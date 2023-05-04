#include "main.h"
/**
 * clear_bit - It sets value of a given bit to 0
 * @n: It is the pointer to the number to be changed
 * @index: index of the bit to clear
 * Return: 1 (success), -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
