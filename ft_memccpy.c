/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:20:45 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/11 16:20:48 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)dest;
	str2 = (char *)source;
	i = 0;
	if (n <= 0)
		return (dest);
	while (i != n)
	{
		str1[i] = str2[i];
		i++;
		if (str2[i] == c)
		{
			return (dest);
		}
	}
	return (dest);
}
