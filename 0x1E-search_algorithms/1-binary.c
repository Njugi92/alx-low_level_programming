#include "search_algos.h"
/**
 * binary_search - It searches for a value in sorted
 * array of integers using binary search
 * @array: Pointer to the first element of array to search
 * @size: Number of elements in array
 * @value: The value to be searched
 * Return: -1 if value to be searched is not there or arra
 * is Null. Otherwise the index of its location
 * Description: This prints the [sub] array being searched
 * after each change
 */
int binary_search(int *array, size_t size, int value)
{
	size_t j, left, right;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}
	return (-1);
}
