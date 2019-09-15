/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:00:44 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/15 13:00:47 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	len;
	char	*chg;
	char	*str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	chg = (char *)s;
	len--;
	while (chg[len] == ' ' || chg[len] == '\n' || chg[len] == '\t')
		len--;
	chg[len + 1] = '\0';
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	return (ft_strcpy(str, s));
}
