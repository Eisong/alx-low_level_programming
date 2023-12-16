#include "search_algos.h"

/**
* linear_skip - looks for a value in an array
* 		of integers using linear search
* @array: A pointer to the first element of the array to search
* @value: The value to search for
* 
* Return: if the value is not present or the array is NULL, -1
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	/* check if the list is NULL */
	if (list == NULL)
		return (NULL);

	/* Perform Linear skip */
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		/* Store the previous jump node */
		node = jump;

		/* if the express lane is available */
		if (jump->express != NULL)
		{
			/* Jump to the next express node */
			jump = jump->express;

			printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		}
		else
		{
			/* Traverse to the end of the list */
			while (jump->next != NULL)
				/* move to the next node in the list */
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->next;

	/* perform a linear search, checking each */
	/* node's value to find the target value */
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	Printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	
	return (node->n == value ? node : NULL);
}
