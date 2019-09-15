/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:51:27 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/15 11:51:29 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*new1;
	char	*new2;

	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	new1 = (char *)s1;
	new2 = (char *)s2;
	if (ft_strncmp(new1, new2, n) == 0)
		return (2);
	else
		return (0);
}
