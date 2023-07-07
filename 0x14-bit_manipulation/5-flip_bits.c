#include "main.h"

/**
 * flip_bits - get a counts of the number of bits to change
 * and also to get from one number to another
 * @n: Stores first number
 * @m: Stores second number
 *
 * Return: Return the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
	{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	current = exclusive >> i;
	if (current & 1)
	count++;
	}

	return (count);
	}
