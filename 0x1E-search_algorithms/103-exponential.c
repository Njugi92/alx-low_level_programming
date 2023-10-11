#include "search_algos.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * _binary_search - It searches for a value in sorted
 * array of integers using binary search
 * @array: Pointer to the first element of the array to search
 * @left: starting index of [sub]array to search
 * @right: ending index of [sub]array to search
 * @value: the value to search for
 * Return: -1 if value to search for is not there, or array
 * is empty. Otherwise the index where value is located
 * Description: This function prints the [sub]array being
 * searched after each change
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searchingin array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using exponential search
 * @array: Pointer to first element of the array to search for
 * @size: Number of elements in the array
 * @value: value to search for
 * Return: if array is null or value is not there -1
 * Otherwise, index where the value is located in
 * Description:
 * It prints a value everytime it is compared in the array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%lld] = [%d]\n", i, array[i]);
	}
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%lld] and [%lld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
