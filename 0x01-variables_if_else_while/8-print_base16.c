#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char y;

	x = '0';
	y = 'A';
	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y < 'F')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
