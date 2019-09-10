char	*strcat(char *str1, const char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str1[i])
		i++;
	while(str2[j])
	{
		str1[i] = str[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str1);
}