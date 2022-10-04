#include <stdio.h>

/**
 * main - print sum of array
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, sum;

	sum = 0;
	int myarray[] = {1, 2, 3, 4, 5, 6, 7, 8};

	for (i = 0; i < 8; i++)
		sum = sum + myarray[i];

	printf("The same of the array is %d\n", sum);
	
	return (0);
}
