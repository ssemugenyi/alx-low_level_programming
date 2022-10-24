#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: string
  * Return: reversed string
  */
void rev_string(char *s)
{
	int b = 0, i;
	char temp = s[0];

	while (s[b] != '\0')
	{
		b++;
	}
	for (i = 0; i < b; i++)
	{
		b--;
		temp = s[i];
		s[i] = s[b];
		s[b] = temp;
	}
}
