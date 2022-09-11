#include <stdio.h>

/**
 * main - Entry point
 * Print all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int st_num, nd_num, rd_num, th_num;

	for (st_num = 48; st_num < 58; st_num++)
	{
		for (nd_num = st_num; nd_num < 58; nd_num++)
		{
			for (rd_num = 48; rd_num < 58; rd_num++)
			{
				for (th_num = rd_num; th_num < 58; th_num++)
				{
					putchar(st_num);
					putchar(nd_num);
					putchar(' ');
					putchar(rd_num);
					putchar(th_num);
					if (st_num + nd_num + rd_num + th_num != 228)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
