#include <stdio.h>

/**
 * main - prints the maximum number in an array
 * Return: 0 Always Success
 */
int main(void)
{
	int myarray[] = {12, 34, 56, 7, 89, 90, 12, 31, 36};
	int max, i;

	max = myarray[0];

	for (i = 0; i < 9; i++)
	{
		if (myarray[i] > max)
		{
			max = myarray[i];
		}
	}

	printf("Maximum: %d\n", max);

	return (0);
}
