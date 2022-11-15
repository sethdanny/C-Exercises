#include <stdio.h>

/**
 * main - sum of elements of an array
 * Return: 0 Always
 */
int main(void)
{
	int arr[] = {23, 12, 34, 56, 78};
	int *p, sum = 0;

	for (p = &arr[0]; p < &arr[4]; p++)
	{
		sum += *p;
	}
	printf("Sum of elements = %d\n", sum);

	return (0);
}
