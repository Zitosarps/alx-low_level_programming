#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to modify.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int v)
{
	unsigned int nbits;

	for (nbits = 0; n || v; n >>= 1, v >>= 1)
	{
		if ((n & 1) != (v & 1))
			nbits++;
	}

	return (nbits);
}
