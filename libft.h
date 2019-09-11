/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:07:15 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/08 18:07:24 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct			s_list
{
		void			*content;
		size_t			content_size;
		struct s_list 	*next;
}						t_list;

void					ft_bzero(void *s, size_t n);
void					*ft_memset(void *str, int nb, size_t size);
void					*ft_memcpy(void *destination, const void *source, size_t n);
void					*ft_memccpy(void *dest, const void *source, int c, size_t n);
void					*ft_memmove(void *dest, const void *source, size_t n);
void					*ft_memchr(const void *arr, int c, size_t n);
int 					ft_memcmp(const void *arr1, const void *arr2, size_t n);
int						ft_strcmp(char *s1, char *s2);
char					*ft_strcpy(char *str1, const char *str2);
char					*ft_strdup(char *src);
int						ft_strlen(char *str);
char					*ft_strcat(char *str1, const char *str2);
char					*ft_strncat(char *str1, const char *str2, size_t n);
char					*ft_strncpy(char *str1, const char *str2, size_t n);

#endif
