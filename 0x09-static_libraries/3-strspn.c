#include "main.h"
/**
  * _strspn - Gets the length of a prefix substring
  * @s: string
  * @accept: substring
  * Return: 0
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, numbytes, test;

	numbytes = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		test = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				numbytes++;
				test = 1;
			}
		}
		if (test == 0)
		{
			return (numbytes);
		}
	}
	return (numbytes);
}
