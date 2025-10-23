int string_to_number(const char *src)
{
	int result = 0;
	int i = 0;
	while(src[i])
	{
		if(src[i] != '-')
			result = result * 10 + (src[i] - '0');
		i++;
	}
	if(src[0] == '-')
		result = -result;
	return result;
}
