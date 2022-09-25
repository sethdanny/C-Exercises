#include <stdio.h>

/**
 * main - program to reverse array elements
 * Return: reversed array
 */
int main(void)
{
	int myarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int temp, i, length;

	length = 9;

	for (i = 0; i < length / 2; i++)
	{
		temp = myarray[i];
		myarray[i] = myarray[length - i - 1];
		myarray[length - i - 1] = temp;
	}

	for (i = 0; i < length; i++)
	{
		printf("myarray[%d] = %d\n",i, myarray[i]);
	}

	return (0);
}

