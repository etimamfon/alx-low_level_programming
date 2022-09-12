#include <stdio.h>
/**
 * main - prints all possible combinations of sinle digit
 *
 * Return: Always 0
 */
int main(void)
{
	int combo;

	for (combo = 0; combo <= 9; combo++)
	{
		putchar(combo + '0');
		if (combo < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
