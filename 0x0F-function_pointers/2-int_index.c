#include "function_pointers.h"

/**
  * int_index - return index place if comparison = true, else -1
  * @array: array
  * @size: size of elements in array
  * @cmp: pointer to func of one of the 3 in main
  *
  * Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);

				j++;
			}
		}
	}

	return (-1);
}
