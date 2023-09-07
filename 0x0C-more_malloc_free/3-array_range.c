#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function with two argument
 * @min: int type argument
 * @max: int type argument
 *
 * Description: creates an array of integers
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int total, j;

	total = max - min + 1;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < total; j++)
	{
		arr[j] = min;
		min++;
	}
	return (arr);
}
