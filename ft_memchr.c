/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:04:38 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/11 18:04:41 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *arr, int c, size_t n)
{
	char	*str;
	void	*ret;
	size_t	i;

	i = 0;
	str = (char *)arr;
	while (i != n)
	{
		if (str[i] == c)
		{
			ret = (void *)&str[i];
			return (ret);
		}
		i++;
	}
	return (NULL);
}
