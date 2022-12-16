#include "main.h"

/**
  * more_numbers - Print numbers from 0 to 14 10 times, followed by a new line
  * Return: None
  */
void more_numbers(void)
{
	short lines = 10, part, i;

	while (lines--)
	{
		for (part = 1; part < 3; part++)
		{
			for (i = 48; i <= 57; i++)
			{
				if (part == 2 && i > 52)
				{
					break;
				}
				if (part == 2)
				{
					_putchar('1');
				}
				_putchar(i);
			}
		}
		_putchar('\n');
	}
}
