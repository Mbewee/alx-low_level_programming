#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two two-digit numbers
 * Numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits , 1 should be printed as 01
 * combination of numbers must be separated by a comma followed by a space
 * Combination of numbers should be printed in ascending order.
 * '00 01' and '01 00' are consideredas the same combination
 * You can only use 'putchar' to print to console
 * You can only use 'putchar' up to 8 times
 * You are not allowed to use any variable of type 'char'
 * Returni: 0
 */
int maini(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10); + 48);
				putchar((j % 10); + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


