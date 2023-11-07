#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include "main.h"
/**
 *print_digit - function that prints out a given number as an integer value
 *@ap: number to be pushed through function
 *Return: The number of integers printed EX: 123 - 3
 */
int print_digit(va_list ap)
{
	int count = 0;
	int calc, hold, track_dig;
	int value = va_arg(ap, int);

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
	hold = calc; //holding calc value without changing calc
	track_dig = 1;
	while (hold >= 10)
	{
		hold = hold / 10; //calculate what to print and hold it
		track_dig = track_dig * 10;} //tracking number of digits
	while (track_dig >= 1) //from previous line
	{
		if (value == INT_MIN && track_dig == 1) { //if these criteria are met, add 8 to print INT_MIN
			putchar('8');
			count++;
			track_dig = track_dig / 10; }
		else
		{
			count++;
			putchar((calc / track_dig) % 10 + '0'); //prints all other positive integers
			track_dig = track_dig / 10;
		}
	}
	return (count);
}
