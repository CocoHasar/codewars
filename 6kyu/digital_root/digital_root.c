int digital_root(int n)
{
	if(n < 10)
		return n;
	if(n == 10)
		return 1;
	int result = 0;
	while(n > 0)
	{
		result += n % 10;
		n /= 10;
	}
	return digital_root(result);
}
