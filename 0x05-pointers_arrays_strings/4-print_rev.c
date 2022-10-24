#include "main.h"
/**
  * print_rev - prints reverse of the string
  * @s: string
  * Return: Nothing
  */
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
