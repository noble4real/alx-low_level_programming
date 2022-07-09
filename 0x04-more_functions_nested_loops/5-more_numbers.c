#include "main.h"
/**
 * more_numbers - prints numbers to 14
 *
 * Return: return nothing
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar((y /10) + '0');
			_putchar((y % 10) + '0');
		}
		_putcahar('\n');
	}
}
