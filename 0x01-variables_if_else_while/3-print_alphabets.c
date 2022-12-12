#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Man;
	char woman;

	for (woman = 'a'; woman <= 'z'; woman++)
		putchar(woman);
	for (Man = 'A'; Man <= 'Z'; Man++)
		putchar(Man);
	putchar('\n');

	return (0);
}
