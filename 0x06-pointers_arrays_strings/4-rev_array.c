#include "main.h"
/**
  * reverse_array -  reverses the string
  * @a: an array of integers
  * @n: the number of elements to swap
  * Return: Nothing
  */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
