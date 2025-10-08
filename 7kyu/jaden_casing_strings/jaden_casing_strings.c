char *to_jaden_case(char *jaden_case, const char *string)
{
	if(string[0] >= 'a' && string[0] <= 'z')
		jaden_case[0] = string[0] - 32;
	else
		jaden_case[0] = string[0];
	int i = 1;
	while(string[i])
	{
		if(string[i - 1] == ' ')
			if(string[i] >= 'a' && string[i] <= 'z')
				jaden_case[i] = string[i] - 32;
			else
				jaden_case[i] = string[i];
		else
			jaden_case[i] = string[i];
		i++;
	}
	jaden_case[i] = '\0';
	return jaden_case;
}
