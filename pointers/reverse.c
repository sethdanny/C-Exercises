#include <stdio.h>

/** MACRO **/
#define N 5

/**
 * main - print a series of numbers in reverse
 * order using pointers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a[N], *p;

	printf("Enter %d elements: ", N);

	for (p = a; p <= (a + N - 1); p++)
		scanf("%d", p);

	printf("Print elements in reverse order\n");

	for (p = (a + N - 1); p >= a; p--)
		printf("%d\t", *p);
	printf("\n");

	return (0);
}
