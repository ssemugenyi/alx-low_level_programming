#include "main.h"
/**
  * times_table - Prints nine times timetable
  *
  * Return: 0
  */
void times_table(void)
{
	int i, k, times;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (k = 1; k <= 9; k++)
		{
			times = (i * k);
			if ((times / 10) > 0)
			{
				_putchar((times / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((times % 10) + '0');
			if (k < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
