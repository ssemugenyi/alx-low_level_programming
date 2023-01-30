#include "main.h"
/**
  * _strncpy - It copies a string
  * @dest: destination
  * @src: Source
  * @n: input
  * Return: 0
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
