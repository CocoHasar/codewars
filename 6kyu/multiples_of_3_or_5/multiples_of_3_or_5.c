int solution(int n)
{
	if(n <= 0)
		return 0;
	int result = 0;
	int i = 0;
	while(i < n)
	{
		if((i % 3 == 0) || (i % 5 == 0))
			result += i;
		i++;
	}
	return result;
}
