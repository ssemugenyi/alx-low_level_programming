#include "main.h"
/**
  * jack_bauer - Prints every minute in 24
  *
  * Return: 0
  */
void jack_bauer(void)
{
	int j, k;

	for (j = 0; j < 24; j++)
	{
		for (k = 0; k < 60; k++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');

		}
	}
}
