#include <ctype.h>
#include <stddef.h>

size_t duplicate_count(const char *text)
{
	int counts[36] = {0};
	int i = 0;
	while(text[i])
	{
		if(isalpha(text[i]))
			counts[tolower(text[i]) - 'a' + 10]++;
		else
			counts[text[i] - '0']++;
		i++;
	}
	size_t count = 0;
	int j = 0;
	while(j < 36)
	{
		if(counts[j] > 1)
			count++;
		j++;
	}
	return count;
}
