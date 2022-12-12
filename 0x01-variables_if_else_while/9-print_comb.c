#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int Alpha;

	for (Alpha = 48; Alpha < 58; Alpha++)
	{
		putchar(Alpha);
		if (Alpha != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
