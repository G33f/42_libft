#include "libft.h"

char	*ft_alpup(char *str)
{
	int	i;

	i = ft_strlen(str);
	if (i == 0)
		return (0);
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
	return (str);
}