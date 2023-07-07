#include "main.h"

/**
 * get_endianness - confirm the response of a machine and size of endianness
 * Return: Return 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
