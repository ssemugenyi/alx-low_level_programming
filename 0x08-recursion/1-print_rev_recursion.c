#include "main.h"
/**
  * _print_rev_recursion - prints a string in reverse
  * @s: string input
  * Return: Nothing
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		return;
	}
	_putchar(*s);
}
