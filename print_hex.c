#include "main.h"

/**
 * print_hex - prints a number in hexadecimal
 * @args: the number to print
 * Return: number of bytes printed
*/

int print_hex(va_list args)
{
	int counter = 0, arr[32];
	unsigned int x = va_arg(args, unsigned int);

	if (x == 0)
	{
		_putchar('0');
		return (1);
	}
	for (int i = 0; x > 0; i++)
	{
		arr[i] = x % 16;
		x /= 16;
	}
	for (int i -= 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			_putchar(arr[i] + 'a' - 10);
		else
			_putchar(arr[i] + '0');
		counter++;
	}
	return (counter);
}
