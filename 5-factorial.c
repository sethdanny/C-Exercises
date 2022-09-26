#include <stdio.h>

/**
 * main - find a factorial of a number using a recursive function
 * @n: integer value
 * Return: 0 Always (success)
 */
int fact(int n);

int main(void)
{
	int number;

	printf("Enter the number: ");
	scanf("%d", &number);
	printf("The Factorial of %d = %d\n", number, fact(number));

	return (0);
}

/**
 * fact - function to find the factorial of a number
 * @n: stores the integer number to find factorial for
 * Return: the factorial of a number
 */
int fact(int n)
{
	if (n == 1)
	{
		return (1);
	}

	else
	{
		return (n * fact(n - 1));
	}
}
