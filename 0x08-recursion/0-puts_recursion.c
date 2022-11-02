#include "main.h"
/**
  * _puts_recursion - prints a string
  * @s: string input
  * Return: Nothing
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
}
