#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * malloc_checked - function that allocates memory using malloc
  * @b: input
  * Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
