#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - ...
  * @separator: ...
  * @n: ...
  *
  * Return: ...
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int v = 0;

	if (n > 0)
	{
		va_start(args, n);

		while v < n)
		{
			printf("%d", va_arg(args, int));

			if (v != n - 1  && separator != NULL)
				printf("%s", separator);

			v++;
		}
		va_end(args);
	}
	printf("\n");
}
