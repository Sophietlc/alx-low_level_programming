#include <stdlib.h>
#include "main.h"

/**
 * _realloc - rellocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated (malloc(old_size))
 * @old_size: size previous memory
 * @new_size: new size to reallocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL) /* free memory if reallocate 0 */
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size) /* return ptr if reallocating same old size */
		return (ptr);

	if (ptr == NULL) /* malloc new size if ptr is originally null */
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	p = malloc(new_size); /* malloc and check error */
	if (p == NULL)
		return (NULL);

	/* fill up values up till minimum of old or new size */
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr); /* free old ptr */

	return (p);
}
