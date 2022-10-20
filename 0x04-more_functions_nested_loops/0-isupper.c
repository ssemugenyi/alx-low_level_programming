#include "main.h"
/**
  * _isupper - Tests for uppercase character
  * @c: It is a character
  * Return: 1 (Uppercase) 0 (otherwise)
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
