#include "main.h"

/**
 * jack_bauer - Print every minute in the day
 * Return: void
 */
void jack_bauer(void)
{
	char hr_1, hr_2, m_1, m_2;

	for (hr_1 = '0'; hr_1 < '3'; hr_1++)
	{
		for (hr_2 = '0'; hr_2 < 58; hr_2++)
		{
			if (hr_1 == '2' && hr_2 == '4')
			{
				break;
			}
			for (m_1 = '0'; m_1 < '6'; m_1++)
			{
				for (m_2 = '0'; m_2 < 58; m_2++)
				{
					_putchar(hr_1);
					_putchar(hr_2);
					_putchar(':');
					_putchar(m_1);
					_putchar(m_2);
					_putchar('\n');
				}
			}
		}
	}
}
