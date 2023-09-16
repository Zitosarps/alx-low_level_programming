#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function with two argument
 * @nmemb: member of block
 * @size: size of memory
 *
 * Description: allocates memory for an array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int f;
	char *ptr;
	void *done;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (f = 0; f < (size * nmemb); f++)
		ptr[f] = 0;
	done = ptr;
	return (done);
}
