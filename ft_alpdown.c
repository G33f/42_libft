#include "libft.h"

char	*ft_alpdown(char *str)
{
	int	i;

	i = ft_strlen(str);
	if (i == 0)
		return (0);
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return (str);
}