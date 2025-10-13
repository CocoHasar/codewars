{
	unsigned long long result = 0;
	unsigned long long mult = 1;
	while(n > 0)
	{
		int digit = n % 10;
		n /= 10;
		int square = digit * digit;

		result = mult * square + result;

		if(square < 10)
			mult = 10 * mult;
		else
			mult = 100 * mult;
	}
	return result;
}
