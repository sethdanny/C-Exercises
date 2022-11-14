#include <stdio.h>

/**
 * main - find the minimum and maximum value of an array
 * Return: 0 Always
 */
void minMax(int arr[], int len, int *min, int *max);

int main(void)
{
	int arr[] = {20, 30, 40, 12, 34, 46, 7, 9, 5, 67, 90, 46, 689};
	int min, max;
	int len = sizeof(arr) / sizeof(arr[0]);

	minMax(arr, len, &min, &max);

	printf("The minimum and maximum values are %d, %d\n", min, max);

	return (0);
}

/**
 * minMax- function to find the minimum
 * and maximum values of an array using pointers
 * @arr: array of integer elements
 * @len: size of an array (length)
 * @min: pointer to minimum value
 * @max: pointer to maximum value
 */
void minMax(int arr[], int len, int *min, int *max)
{
	int i;

	*min = *max = arr[0];

	for (i = 1; i < len; i++)
	{
		if (arr[i] < *min)
			*min = arr[i];

		else if (arr[i] > *max)
			*max = arr[i];
	}
}
