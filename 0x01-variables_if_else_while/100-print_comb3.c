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

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			printf("%d %d\n", a, b);
		total++;
		}
	}
	printf("\n Total Combinations = %d", total);
	return (0);
}

