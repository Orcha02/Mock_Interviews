#include <stdio.h>
/**
 * rotate - rotates a string to the right in place (same memory space).
 * The last character should become the first.
 * @s: pointer
 * Return: 0
 */
void rotate(char *s)
{
	unsigned int i, count = 0;

	while (s[count])
		count++;

	if (s != NULL)
	{
		putchar(s[count - 1]);
		count--;
		for (i = 0; i < count; i++)
		{
			putchar(s[i]);
		}
	}
	else
	{
		printf("Nothing to read");
	}
}
int main(void)
{
	rotate("Holberton");
	printf("\n");
	return (0);
}
