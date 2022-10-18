#include "main.h"
/**
  * print_last_digit - Prints last digit of the number
  * @i: Always an integer
  * Return: Last digit
  */
int print_last_digit(int i)
{
	int result;

	result = (i % 10);

	if (result < 0)
	{
		result = (-1 * result);
	}
	_putchar(result + '0');
	return (result);
}
