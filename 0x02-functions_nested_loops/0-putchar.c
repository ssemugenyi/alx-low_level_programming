#include "main.h"

/**
  * str - Entry point
  * @name: Takes a character
  * Return: Always 1 (success)
  */
void str(char *name)
{
	name = "_putchar";

	while (*name)
	{
		_putchar(*name++);
	}
	_putchar('\n');
}
