#include "search_algos.h"
/**
 * linear_search - This searches for a value in
 * an array of integers using the linear search
 * algorithm
 * @array: Its input array
 * @size: The size of the array
 * @value: The value to search
 * Return: exit success
 */
int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);
	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (value == array[j])
			return (j);
	}
	return (-1);
}
