#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Alpha;

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
		if (Alpha != 'q' && Alpha != 'e')
		{
			putchar(Alpha);
		}
	}
	putchar('\n');
	return (0);
}
