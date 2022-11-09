#include "main.h"
/**
  * _strdup - duplicate to new memory space location
  * @str: char
  * Return: 0
  */
char *_strdup(char *str)
{
	int j = 0, i = 0;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	array = malloc(sizeof(char) * (i + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		array[j] = str[j];
		j++;
	}
	array[j + 1] = 0;
	return (array);
}
