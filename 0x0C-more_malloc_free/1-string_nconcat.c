#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: bytes
  * Return: pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, j, counter, counter_2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n < j)
	{
		j = n;
	}
	j += i;
	array = malloc(sizeof(char *) * (j + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < i; counter++)
	{
		array[counter] = s1[counter];
	}
	for (counter_2 = 0; counter < j; counter_2++)
	{
		array[counter] = s2[counter_2];
		counter++;
	}
	counter++;
	array[counter] = '\0';
	return (array);

}
