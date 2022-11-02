#include "main.h"
/**
  * factorial - returns of a factorial
  * @n: Number
  * Return: factorial of a number
  */
int factorial(int n)
{
	if (n <= 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
