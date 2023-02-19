#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int total = 10;

	for (a = 0; a <= 8; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			printf("%d%d", a, b);
			putchar(',');
		total++;
		}
	}
	putchar('\n');
	return (0);
}

