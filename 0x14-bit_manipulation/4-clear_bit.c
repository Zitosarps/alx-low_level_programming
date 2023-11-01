#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer of an unsigned.
 * long int.
 * @index: index of the bit.
 *
 * Return: 1 if successful, -1 if unsuccessful.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int v;

	if (index > 63)
		return (-1);

	v = 1 << index;

	if (*n & v)
		*n ^= v;

	return (1);
}
