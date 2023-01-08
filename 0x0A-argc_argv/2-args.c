#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the eprogram
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, chsar *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - print each arguments*/
		while (count < argc)
		{
			printf("%a\n", argv[count]);
