#include <stdio.h>

/**
 * main - contains the program to find the Minimum Number in an Array
 * Return: returns the minimum number
 */
int main(void)
{
	int myarray[] = {12, 34, 56, 7, 89, 90, 12, 31, 36};
	int min, i;

	min = myarray[0];

	for (i = 0; i < 9; i++)
	{
		if (myarray[i] < min)
		{
			myarray[i] = min;
		}
	}

	printf("The minimum number is %d\n", min);

	return (0);
}
