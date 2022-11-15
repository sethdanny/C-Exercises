#include <stdio.h>
#include <string.h>

/**
 * main - program to check for duplicate characters
 * in a string
 * @s: string to remove duplicates from
 * Return: Always 0
 */
void remove_duplicates(char *s);

int main(void)
{
	char s[] = "aaaabbbbbccccddddeeeeeffffgghhhjjj";

	remove_duplicates(s);

	printf("%s\n", s);

	return (0);
}

/**
 * remove_duplicates - function to remove duplicates
 * @s: string to test
 */
void remove_duplicates(char *s)
{
	int i, j, k, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; )
		{
			if (s[i] == s[j])
			{
				for (k = j; k < len; k++)
				{
					s[k] = s[k + 1];
					len--;
				}
			}

			else
				j++;
		}
	}
}
