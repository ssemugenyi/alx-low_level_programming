#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * array_range - a function that creates an array of integers
  * @min: min input
  * @max: max input
  * Return: pointer to new array of integers
  */
int *array_range(int min, int max)
{
	int *array, i, length;

	if (min > max)
	{
		return (NULL);
	}
	for (length = 0; length < (max - min); length++)
		;
	array = malloc(sizeof(int) * (length + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		array[i] = min++;
	}
	return (array);
}
