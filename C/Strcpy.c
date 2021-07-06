#include "headers.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	dest = dest - i;
	return (dest);
}
