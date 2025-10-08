#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *DuplicateEncoder(const char *src)
{
	char *dest = malloc((strlen(src) + 1) * sizeof(src[0]));
	if(dest == NULL) return NULL;

	int count[256] = {0};

	int i = 0;
	while(src[i])
	{
		count[tolower(src[i])]++;
		i++;
	}

	i = 0;
	while(src[i])
	{
		if(count[tolower(src[i])] > 1)
			dest[i] = ')';
		else
			dest[i] = '(';
		i++;
	}
	dest[i] = '\0';
	return dest;
}
