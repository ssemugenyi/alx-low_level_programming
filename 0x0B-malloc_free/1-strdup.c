#include "main.h"
/**
  * _strdup - duplicate to new memory space location
  * @str: char
  * Return: 0
  */
char *_strdup(char *str)
{
	int j, end;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	for (end = 0; end <= *str; end++)
	{
	}
	end += 1;
	array = malloc(sizeof(char) * end);
	for (j = 0; j < end; j++)
	{
		array[j] = str[j];
	}
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
