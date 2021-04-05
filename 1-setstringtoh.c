#include <stdio.h>
/**
 * setstringtoh - If there's an 'H' print all string as 'H'
 * @s: pointer
 * @size: size of array
 * Return: 0
 */
void setstringtoh(char *s, unsigned int size)
{
	unsigned int i, flag;

	if (s != NULL && size != 0)
	{
		for (i = 0; i <= size; i++)
		{
			if (s[i] == 'H')
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
			}
		}

		if (flag == 1)
		{
			for (i = 0; i <= size; i++)
			{
				putchar('H');
			}
			printf(" (\'H\' found)");
		}
		else
		{
			for (i = 0; i <= size; i++)
			{
				putchar(s[i]);
			}
			printf(" no \'H\' found");
		}
	}
	else
	{
		printf("Nothing to read");
	}
}

int main(void)
{
	setstringtoh("Holberton", 9);
	printf("\n");
	return (0);
}
