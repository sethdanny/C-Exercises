#include <stdio.h>

/**
 * main - find the maximum value using pointer
 * Return: Always 0
 */
int *max(int *, int *);

int main(void)
{
	int x, y, *ptr;

	x = 100;
	y = 200;
	ptr = NULL;

	ptr = max(&x, &y);

	printf("The maximum between %d and %d is %d\n", x, y, *ptr);

	return (0);
}

/**
 * max - function to find the maximum
 * @m: pointer to the first number
 * @n: pointer to the second number
 * Return: pointer to the maximum value
 */
int *max(int *m, int *n)
{
	if (*m > *n)
		return (m);
	else
		return (n);
}
