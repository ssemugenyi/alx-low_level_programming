#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
