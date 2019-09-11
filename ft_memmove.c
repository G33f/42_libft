/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:37:52 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/11 17:37:55 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *source, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	s1 = (char *)dest;
	s2 = (char *)source;
	while (i != n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
