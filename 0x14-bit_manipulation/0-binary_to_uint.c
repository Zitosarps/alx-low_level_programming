#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @binary_string: String representation of the binary number.
 *
 * Return: The converted unsigned integer.
 */
unsigned int binary_to_uint(const char *binary_string) {
    // Check if the input string is NULL
    if (!binary_string)
        return 0;

    unsigned int decimal_value = 0;

    // Iterate through each character in the binary string
    for (int i = 0; binary_string[i]; i++) {
        // Check for invalid characters in the binary string
        if (binary_string[i] < '0' || binary_string[i] > '1')
            return 0;

        // Update the decimal value based on the binary digit
        decimal_value = 2 * decimal_value + (binary_string[i] - '0');
    }

    return decimal_value;
}
