#include "main.h"

/**
 * get_endianness - check if a machine is little or big endiann
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
