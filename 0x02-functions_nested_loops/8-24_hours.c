#include "main.h"

/**
 * jack_bauer - print minutes
 * Description: prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 3; i++)
	{
		_putchar('0' + i);

		for (j = 0; j < 4; j++)
		{
			_putchar('0' + j);
			_putchar(':');

			for (k = 0; k < 6; K++)
			{
				_putchar('0' + k);

				for (l = 0; l < 10; l++)
				{
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}


}
