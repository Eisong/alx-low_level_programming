#include "main.h"

/**
 * get_bit - Retrieves the value of a bit index in a decimal number
 * @n: gets number to search
 * @index: identifies index of the bit
 *
 * Return: Returns value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
	{
	int bit_val;

	if (index > 63)
	return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
	}
