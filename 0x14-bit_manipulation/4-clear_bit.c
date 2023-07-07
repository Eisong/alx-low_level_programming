#include "main.h"

/**
 * clear_bit - puts the value of a given bit to 0
 * @n: Variable containing the number to change
 * @index: identity of index of the bit to clear
 *
 * Return: Successful when it is 1, -1 for failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
