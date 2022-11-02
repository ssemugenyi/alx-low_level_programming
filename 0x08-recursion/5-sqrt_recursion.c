#include "main.h"
/**
  * findsquareroot - my function to calculate sqroot
  * @num: number
  * @sqroot: store
  * Return: square root
  */
int findsquareroot(int num, int sqroot)
{
	if (sqroot < 1)
	{
		return (-1);
	}
	else if (sqroot * sqroot == num)
	{
		return (sqroot);
	}
	else
	{
		return (findsquareroot(num, sqroot - 1));
	}
}
/**
  * _sqrt_recursion - funtion to print squareroot
  * @n: number
  * Return: square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n > 1000000)
		{
			return (findsquareroot(n, (n + 1) / 100));
		}
		return (findsquareroot(n, (n + 1) / 2));
	}
}
