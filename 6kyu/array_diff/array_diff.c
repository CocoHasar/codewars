#include <stddef.h>
#include <stdlib.h>

int is_present(int elem, const int arr[], size_t n)
{
	unsigned long i = 0;
	while(i < n)
	{
		if(arr[i] == elem)
			return 1;
		i++;
	}
	return 0;
}

int *array_diff(const int arr1[], size_t n1, const int arr2[], size_t n2, size_t *z)
{
	int *arr3 = malloc(n1 * sizeof(arr1[0]));
	if (arr3 == NULL) return NULL;
	
	unsigned long i1 = 0;
	unsigned long i3 = 0;

	while(i1 < n1)
	{
		if(is_present(arr1[i1], arr2, n2) == 0)
		{
			arr3[i3] = arr1[i1];
			i3++;
		}
		i1++;
	}
	*z = i3;
	return arr3;
}
