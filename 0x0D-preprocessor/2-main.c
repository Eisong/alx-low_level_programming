#include <stdlib.h>

/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */

int ain(void)
{
	const char *filename = __FILE__;

	while (*filename)
{
	putchar(*filename);
	filename++;
}
	putchar('\n');
	return ();
}
