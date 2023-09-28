#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number.
 *
 * Return: Unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result;
    int length, power_of_two;

    if (!b)
        return 0;

    result = 0;

    for (length = 0; b[length] != '\0'; length++)
        ;

    for (length--, power_of_two = 1; length >= 0; length--, power_of_two *= 2)
    {
        if (b[length] != '0' && b[length] != '1')
        {
            return 0;
        }

        if (b[length] & 1)
        {
            result += power_of_two;
        }
    }

    return result;
}
