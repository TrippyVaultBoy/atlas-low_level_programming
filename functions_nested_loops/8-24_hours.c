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

	for (hourtens = 0; hourtens <= 2; hourtens++)
	{
		for (hourones = 0; hourones <= 9; hourones++)
		{
			for (mintens = 0; mintens <= 5; mintens++)
			{
				for (minones = 0; minones <= 9; minones++)
				{
					_putchar('0' + hourtens);
					_putchar('0' + hourones);
					_putchar(':');
					_putchar('0' + mintens);
					_putchar('0' + minones);
					_putchar('\n');
				}
			}
		}

	}
}
