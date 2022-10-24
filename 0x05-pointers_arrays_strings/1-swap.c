#include "main.h"
/**
  * swap_int - swaps integers
  * @a: first integer
  * @b: second integer
  * Return: Nothing
  */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
