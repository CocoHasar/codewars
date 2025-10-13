#include <inttypes.h>

uint64_t descendingOrder(uint64_t n)
{
	uint64_t counts[10] = {0};
	while(n > 0)
	{
		uint64_t digit = n % 10;
		counts[digit]++;
		n = n / 10;
	}

	uint64_t result = 0;

	int i = 9;
	while(i >= 0)
	{
		while(counts[i] > 0)
		{
			result = 10 * result + i;
			counts[i] = counts[i] - 1;
		}
		i--;
	}
	return result;
}
