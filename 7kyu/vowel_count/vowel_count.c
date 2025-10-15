#include <stddef.h>

size_t get_count(const char *s)
{
	int count = 0;
	int i = 0;
	while(s[i])
	{
		if(s[i] == 'a')
			count++;
		if(s[i] == 'e')
			count++;
		if(s[i] == 'i')
			count++;
		if(s[i] == 'o')
			count++;
		if(s[i] == 'u')
			count++;
		i++;
	}
	return count;
}
