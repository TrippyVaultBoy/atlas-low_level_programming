#include "main.h"

/**
 * jack_bauer- prints every minute from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hourtens;
	int hourones;
	int mintens;
	int minones;

	for (hourtens = 48; hourtens <= 50; hourtens++)
	{
		for (hourones = 48; hourones <= 51; hourones++)
		{
			for (mintens = 48; mintens <= 53; mintens++)
			{
				for (minones = 48; minones <= 57; minones++)
				{
					_putchar(hourtens);
					_putchar(hourones);
					_putchar(58);
					_putchar(mintens);
					_putchar(minones);
					_putchar(10);
				}
			}
		}

	}
}
