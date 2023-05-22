#include "shell.h"

/**
 * bfree - allocates a pointer and NULLs the location
 * @ptr: location of the pointer to free
 *
 * Return: one if freed, otherwise zero.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
