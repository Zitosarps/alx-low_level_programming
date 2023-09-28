#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long int input.
 * @index: Index of the bit.
 *
 * Return: Value of the bit at the given index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index < 64)
    {
        unsigned int i;

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
