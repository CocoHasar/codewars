#include <stdint.h>
#include <stdio.h>

char *create_phone_number(char phnum[15], const uint8_t digits[10])
{
	char temp[] = "(xxx) xxx-xxxx";
	int i = 0;
	int k = 0;
	while(temp[i])
	{
		if(temp[i] == 'x')
		{
			temp[i] = digits[k] + '0';
			k++;
		}
		i++;
	}
	sprintf(phnum, "%s", temp);
	return phnum;
}
