#include <stddef.h>

size_t countBits(unsigned n)
{
	unsigned bit_count = 0;
	while(n > 0)
	{
		if(n & 1)
			bit_count++;
		n = n >> 1;
	}
	return bit_count;
}
