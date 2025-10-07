#include <stdlib.h>
#include <string.h>

char *disemvowel(const char *str)
{
	char *dest = malloc(strlen(str) + 1);
	if(dest == NULL) return NULL;

	int i = 0;
	int j = 0;
	while(str[i])
	{
		if(strchr("aeiouAEIOU", str[i]) == 0)
		{
			dest[j] = str[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return dest;
}
