#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;
	int total = 2;
	for (a = 1; a <=2; a++)
	{
		for (b = 1; b <= 2; b++)
		{
			printf("%d %d %d\n", a, b);
		total++;
		}
	}
	printf("\nTotal Combinations = %d", total);
	return (0);
}

