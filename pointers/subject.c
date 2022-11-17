#include <stdio.h>

/**
 * main - print 5 names of different subjects
 * Return: Always 0
 */
int main(void)
{
	char subjects[5][20];
	int i, j;

	printf("Enter 5 different subjects ");

	for (i = 0; i < 5; i++)
		scanf("%s", subjects[i]);

	printf("The subjects are: ");

	for (i = 0; i < 5; i++)
	{
		j = 0;

		while (*(subjects[i] + j) != '\0')
		{
			printf("%c", *(subjects[i] + j));
			j++;
		}
		printf("\n");
	}

	return (0);
}
