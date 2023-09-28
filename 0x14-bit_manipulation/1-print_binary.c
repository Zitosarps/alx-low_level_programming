#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @decimal_number: The number to print in binary.
 *
 * Return: No return value.
 */
void print_binary(unsigned long int decimal_number)
{
    if (decimal_number > 0)
    {
        if (decimal_number > 1)
            print_binary(decimal_number >> 1);
        _putchar((decimal_number & 1) + '0');
    }
    else
    {
        _putchar('0');
    }
}
