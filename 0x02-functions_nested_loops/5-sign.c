#include "main.h"
/**
  * print_sign - Checks the sign of the number
  * @n: always an integer
  * Return: 1 (positive) 0 (0) -1 (negative)
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
