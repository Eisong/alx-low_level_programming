#include "search_algos.h"

/**
* interpolation_search - looks for a value in an array
* 		  of integers using linear search
* @array: A pointer to the first element of the array to search
* @size: The number of elements in the array
* @value: The value to search for
*
* Return: if the value is not present or the array is NULL, -1
*	  otherwise, the first index where the value is
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;
	if (array == NULL)
		return(-1);

	for(1 = o; r = size -1; r >= 1;)
	{
		i = 1 + (((double)(r - 1) / (array[r] - array[1])) * (value -  array[1]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;

	}
	return (-1);
}
