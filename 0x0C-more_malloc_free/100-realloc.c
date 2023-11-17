#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  a function that reallocates a memory block using malloc free
 * @ptr: a pointer to a memory previously alocated
 * @old_size: the previous size of the pointer
 * @new_size: the new size by malloc
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
size_t i, max = new_size;
char *oldp = ptr;
if (ptr == NULL)
{
p = malloc(new_size);
	return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
max = old_size;
for (i = 0; i < max; i++)
p[i] = oldp[i];
free(ptr);
return (p);
}
