#include <stddef.h>

long long sum_two_smallest_numbers(size_t n, const int numbers[n]) {
	long long arr[] = {numbers[0], numbers[1]};
	size_t i = 2;
	while(i < n)
	{
		if(numbers[i] < arr[0])
		{
			int a = arr[0];
			arr[0] = numbers[i];
			if(a < arr[1]) arr[1] = a;
		}
		else if(numbers[i] < arr[1]) arr[1] = numbers[i];
		i++;
	}
	long long sum = arr[0] + arr[1];
	return sum;
}
