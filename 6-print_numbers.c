#include <stdio.h>

/**
 * main - print numbers from 1 to 10
 * when number is odd add 1
 * when the number is even subtract 1
 * Return: 0 Always success
 */
void odd();
void even();
int n = 1;

/**
 * odd - function to evaluate odd numbers
 * adds 1 to the number
 */
void odd()
{
	if (n <= 10)
	{
		printf("%d ", n + 1);
		n++;
		even();
	}

	return ;
}

/**
 * even - function to increment even numbers
 * subtract 1 on even
 */
void even()
{
	if (n <= 10)
	{
		printf("%d ", n - 1);
		n++;
		odd();
	}

	return ;
}

int main()
{
	odd();
}
