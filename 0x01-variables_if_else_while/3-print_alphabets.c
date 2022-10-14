#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
