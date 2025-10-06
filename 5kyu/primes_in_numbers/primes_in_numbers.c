// current kata : Primes in Number

#include <stdio.h>
#include <stdlib.h>

int factor_count(int *n, int factor)
{
	int f_count = 0;
	while(*n % factor == 0)
	{
		*n = *n / factor;
		f_count++;
	}
	return f_count;
}

char *factors(int n)
{
	char *buffer = malloc(256);
	if(buffer == NULL) return NULL;

	int factor = 2;
	int offset = 0;
	int ret = 0;

	int f_count = factor_count(&n, factor);
	if(f_count > 1)
		ret = sprintf(buffer, "(%d**%d)", factor, f_count);
	if(f_count == 1)
		ret = sprintf(buffer, "(%d)", factor);
	factor++;
	if(ret > 0)
		offset += ret;

	while((factor*factor) <= n)
	{
		f_count = factor_count(&n, factor);
		ret = 0;
		if(f_count > 1)
			ret = sprintf(buffer + offset, "(%d**%d)", factor, f_count);
		if(f_count == 1)
			ret = sprintf(buffer + offset, "(%d)", factor);
		factor += 2;
		if(ret > 0)
			offset += ret;
	}
	if(n > 1)
		sprintf(buffer + offset, "(%d)", n);
	return buffer;
}

