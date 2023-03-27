#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: Always 0
 **/

int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}

	printf("%ld\n", i - 1);

	return (0);
}
