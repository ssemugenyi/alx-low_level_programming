#include "main.h"

/**
  * main - Entry point
  *
  * Return: ALways 0 (success)
  */
int main(void)
{
	char *name = "_putchar";

	while (*name)
	{
		_putchar(*name++);
	}
	_putchar('\n');
	return (0);

}
