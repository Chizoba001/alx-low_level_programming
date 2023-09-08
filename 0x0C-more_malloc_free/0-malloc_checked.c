#include <stdlib.h>
/**
  *malloc_checked - allocates memory using malloc.
  *@b: size of memory to be allocated.
  *
  *Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned in b)
{
	void *p = malloc(b);

	if (p == Null)
		exit(98);

	return (p);
}
