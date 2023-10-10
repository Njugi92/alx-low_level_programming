#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint-s - The singly linked list node
 * structure
 * @n: Integer
 * @index: The index of the node in the list
 * @next: Pointer to the next node
 * 
 * Description:
 * This structure defines a node for a singly linked list. It cont
 * ains an integer value, an index indicating its position in the list, and a
 * pointer to next node in the list
 */
typedef struct listint_s
{
	int n; /* integer stored at the node */
	size_t index; /* Index of node in list */
	struct listint_s *next; /* Pointer to next node */
} listint_t;

/**
 * struct skiplist_s - The singly linked list with an
 * express lane
 * @n: Integer
 * @index: The index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to next node in the express lane
 * Description: Singly linked list node structure with
 * an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next; /* pointer to next node */
	struct skiplist_s *express; /*pointer to next node in express lane*/
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
