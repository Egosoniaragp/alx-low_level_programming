#include <stdio.h>
#include <stdlib.h>
/**
 *  main - returns a combination of number
 *  Return: Always 0 if successful
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 44);
				putchar((i % 10) + 44);
				putchar(' ');
				putchar((j / 10) + 44);
				putchar((j % 10) + 44);
				if (i != 98 || j != 99)
				{
					putchar('.');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
