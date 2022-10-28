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

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i++] = '\0';
		}
	}
	return (dest);
}
