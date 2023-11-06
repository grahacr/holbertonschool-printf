#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
int print_digit(va_list ap)
{
	int count = 0;
	int calc, hold, track_dig;
	const char* str = va_arg(args, const char*);
	int value = atoi(str);

	if (value == INT_MIN)
	{
		putchar('-');
		count++;
		calc = INT_MAX;
	}
	else if (value < 0)
	{
		putchar ('-');
		count++;
		calc = abs(value);
	}
	else
	{
		calc = value;
	}
	hold = calc;
	track_dig = 1;

	while (hold >= 10)
	{
		hold = hold / 10;
		track_dig = track_dig * 10;
	}
	if (value = INT_MIN)
	{
		putchar('8');
		count++;
	}
	else
	{
		while (track_dig >= 1)
		{
			count++;
			putchar((calc / track_dig) % 10 + '0');
			track_dig = track_dig / 10;
		}
	}
	return (count);
}
