/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:23:36 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/11 21:23:38 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *str1, const char *str2, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (str1[i])
		i++;
	if (n != 0)
	{
		while (str2[j] || j < n)
		{
			str1[i] = str2[j];
			i++;
			j++;
			if (j == n)
			{
				str1[i] = '\0';
				return (str1);
			}
		}
		str1[i] = '\0';
		return (str1);
	}
	else
		return (str1);
}
