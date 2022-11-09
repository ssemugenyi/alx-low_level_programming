#include "main.h"
/**
  * _strlen - Returns the length of a string
  * @s: String
  * Return: 0 (sucess)
  */
int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}
