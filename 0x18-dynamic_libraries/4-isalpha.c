#include "main.h"
/**
  * _isalpha - Checks for alphabetic character
  * @c: Always a character
  * Return: Always 1 (lower or upper) 0 (otherwise)
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
