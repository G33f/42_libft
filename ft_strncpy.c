#include "libft.h"

char	*strncpy(char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;
	if (n <= 0)
		return (str1);
	while(str2[i] && i != n)
	{
		str1[i] = str2[i];
		i++;
		if (str[2] == '\0')
			while(str1[i] && i != n)
			{
				str1[i] = '\0';
				i++;
			}
	}
	str1[i] = '\0';
	return (str1);
}