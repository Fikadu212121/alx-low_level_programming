#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main()
{
	int a;
	int b;
	int total = 2;
	for (a = 1; a <= 2; a++)
	{
		for (b = 1; b <= 2; b++)
		{
			printf("%d %d\n", a, b);
		total++;
		}
	}
	printf("\n Total Combinations = %d", total);
	return (0);
}

