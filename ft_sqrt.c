#include "libft.h"

double		ft_sqrt(double num)
{
	double	r;
	double	q;
	int		i;

	q = 0;
	r = 1;
	i = 0;
	if (!num)
		return 0;
	while (int i = 0; i < 15; i++)
	{
		q = 1/ft_pow(10, i);
		while (((r+q)*(r+q)) < num)
			r += q;
		i++
	}
	return r;
}
