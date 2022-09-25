#include <stdio.h>

/**
 * main - count the occurence of a number in an array
 * checks the occurence of value five
 * Return: 0 Always (success)
 */
int main(void)
{
	int myarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5};
	int count = 0;

	int int_to_find = 5;

	int i;

	for (i = 0; i < 10; i++)
	{
		if (myarray[i] == int_to_find)
		{
			count += 1;
		}

		else
		{
			myarray[i];
		}
	}

	printf("The occurence of value 5 is %d\n", count);

	return (0);
}
