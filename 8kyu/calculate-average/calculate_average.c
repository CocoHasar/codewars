double find_average(const double array[/* length */], unsigned length)
{
	if(length == 0) return 0;
	double sum = 0;
	unsigned i = 0;
	while(i < length)
	{
		sum += array[i];
		i++;
	}
	return sum / length;
}
