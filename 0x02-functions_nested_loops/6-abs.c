#include "main.h"
/**
  * _abs - Prints absolute of a number
  * @i: Always an integer
  * Return: Absolute number
  */
int _abs(int i)
{
	if (i < 0)
	{
		i = (-1) * i;
		_putchar(i + '0');
	}
	else
	{
		_putchar(i + '0');
	}
	return (0);
}
