#include "main.h"
/**
  * _isdigit - Checks digits
  * @c: it is always an integer
  * Return: Return 1 (digit) 0 (otherwise)
  */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
