#include <stddef.h>
int find_outlier(const int values[], size_t count)
{
	int odds = 0;
	int evens = 0;
	int i = 0;
	while(i < 3)
	{
		if(values[i] % 2)
			odds++;
		else
			evens++;
		i++;
	}
	size_t j = 0;
	while(j < count)
	{
		if(odds > evens)
		{
			if((values[j] % 2) == 0)
				return values[j];
		}
		else
		{
			if(values[j] % 2)
				return values[j];
		}
		j++;
	}		
}
