#include "main.h"
/**
  * print_rev - prints reverse of the string
  * @s: string
  * Return: Nothing
  */
void print_rev(char *s)
{
	int i = 0, b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	while (s[i] != '\0')
	{
		_putchar(s[b - i - 1]);
		i++;
	}
	_putchar('\n');
}
