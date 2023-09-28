#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long int input.
 * @index: Index of the bit.
 *
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
       unsigned int i;

	if (index < 64)

        for (i = 0; i <= index; n >>= 1, i++)
        {
            if (i == index)
            {
                return (n & 1);
            }
        }
    }

    return (-1);
}
