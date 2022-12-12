#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int Alpha;

	for (Alpha = 122; Alpha >= 97; Alpha--)
		putchar(Alpha);
	putchar('\n');
	return (0);
}
