#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive number
 * @argc: number of arguments passed to the program
 * @argv: an arra of strings that contain the argument passed to
 * the program
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		str = argv[i];
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] < '0' || str[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(str);
	}
	printf("%d\n", sum);

	return (0);
}
