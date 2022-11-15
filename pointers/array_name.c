#include <stdio.h>

/**
 * main - sum of elements of an array using array name
 * Return: Always 0
 */
int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int sum, *p;

	sum = 0;

	for (p = a; p <= (a + 4); p++)
		sum += *p;

	printf("sum = %d\n", sum);

	return (0);
}
