/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:10:35 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/13 22:10:39 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	char	*spy;

	i = 0;
	spy = ft_strstr(str1, str2);
	while (i < len)
	{
		if (spy == &str1[i])
		{
			if (i + ft_strlen(str2) < len)
				return ((char *)&str1[i]);
			else
				return (NULL);
		}
		else
			i++;
	}
	return (NULL);
}
