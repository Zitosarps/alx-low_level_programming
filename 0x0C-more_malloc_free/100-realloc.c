#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function with 3 parameter
 * @ptr: pointer to old memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Description: allocate memory for new size
 * Return: pointer to new memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int v;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
		{
			free(np);
			return (NULL);
		}
		return (np);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	np = malloc(new_size);
	if (np == NULL)
	{
		free(np);
		return (NULL);
	}

	for (v = 0; v < old_size; v++)
		np[v] = *((char *)ptr + v);

	free(ptr);
	return (np);
}
