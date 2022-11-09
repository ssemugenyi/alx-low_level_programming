#include "main.h"

/**
  * _islower - It checks lower alphabets
  * @c: Always a character
  * Return: Always 1 (lowercse) 0 (uppercase
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
