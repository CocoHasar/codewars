#include <stdio.h>

const char *even_or_odd(int n)
{
	if(n % 2)
		return "Odd";
	return "Even";
}

int main(void)
{
	printf("%s\n", even_or_odd(5));

	return 0;
}
