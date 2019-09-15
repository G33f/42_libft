/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:20:18 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/11 18:20:21 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)arr1;
	s2 = (char *)arr2;
	if (n <= i)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
		if (i == n && s2[i] != s1[i])
			return (0);
	}
	if (s2[i] == '\0' && s1[i])
		return (1);
	else
		return (s1[i] - s2[i]);
}
