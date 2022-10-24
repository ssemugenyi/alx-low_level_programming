#include "main.h"
/**
  * puts_half - prints last half of the string
  * @str: input string
  * Return: Nothing
  */
void puts_half(char *str)
{
	int b = 0, i, n;

	while (str[b] != '\0')
	{
		b++;
	}
	n = (b / 2);
	if ((b % 2) != 0)
	{
		n = ((b + 1) / 2);
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
