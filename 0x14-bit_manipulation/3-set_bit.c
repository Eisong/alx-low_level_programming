#include "main.h"

/**
 * set_bit - Put bit at a given index to 1
 * @n: Variable allocation to the number to be change
 * @index: check index of the bit to set to 1
 *
 * Return: Rturn 1 for success, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
	{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
	}
