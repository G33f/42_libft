/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:20:24 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/15 16:20:27 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*skip_c(char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static char	*creat_s(char *s, char c)
{
	size_t	i;
	char	*new;

	i = 0;
	while (s[i] != c)
		i++;
	new = ft_strnew(i);
	if (!new)
		return (NULL);
	new = ft_strncat(new, s, i);
	return (new);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	char	*tm;
	size_t	i;
	int		x;

	i = 0;
	tm = (char *)s;
	while (*tm)
	{
		while (*tm != c)
			tm++;
		i++;
		tm = skip_c(tm, c);
	}
	tm = (char *)s;
	if (!(str = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	x = 0;
	while (str[x])
	{
		str[x] = creat_s(tm, c);
		if (!str[x])
			return (NULL);
		while (*tm != c)
			tm++;
		x++;
	}
	return (str);
}
