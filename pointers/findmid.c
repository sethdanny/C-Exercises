#include <stdio.h>

/**
 * main - program to find the middle of an array
 * findMid - function to find the middle number
 * @a: array of integers
 * @n: length of an array
 * Return: 0 Always
 */
int *findMid(int a[], int n);

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(a[0]);
	int *p;

	p = findMid(a, n);

	printf("The mid is %d\n", *p);

	return (0);
}

int *findMid(int a[], int n)
{
	return (&a[n / 2]);
}
