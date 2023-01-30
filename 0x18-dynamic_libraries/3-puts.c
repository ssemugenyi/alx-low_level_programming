#include "main.h"
/**
  * _puts - Prints a string
  * @str: string to be printed
  * Return: nothing
  */
void _puts(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
