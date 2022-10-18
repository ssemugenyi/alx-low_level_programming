#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: ALways 0 (success)
  */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		printf("%c", *str++);
	}
	printf("\n");
	return (0);

}
