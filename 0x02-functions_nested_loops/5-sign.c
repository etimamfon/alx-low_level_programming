#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * greater, equal or less than zero.
 *
 * @n: is the int that will be used for the arguement of the function
 *
 * Return: -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45)
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
	_putchar('\n');
}
