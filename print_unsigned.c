#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @args: the unsigned integer to print
 * Return: number of char printed
*/
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int count = 1;

	n /= 10;

	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num -= (digit * exp);
			exp /= 10;
			count++;
		}
	}
	return (count);
}
