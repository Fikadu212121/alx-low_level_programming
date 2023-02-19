#include <stdio.h>
/**
 * main - Entry point
 * Description - Combination of two two-digit
 * Return: Always 0 (success)
 */
int main(void)
{
        int a;
        int b;
	
	for (a = 0; a <= 9; a++)
        {
                for (b = 0; b <= 9; b++)
                {
			putchar('0' + a);
			putchar('0' + b);
			if (b < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
