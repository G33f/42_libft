/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:57:02 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/11 15:57:07 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *source, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)dest;
	str2 = (char *)source;
	i = 0;
	if (n <= 0)
		return (str1);
	while (i != n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
