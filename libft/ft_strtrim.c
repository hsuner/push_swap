/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsuner <hsuner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:21:10 by hsuner            #+#    #+#             */
/*   Updated: 2023/10/27 15:03:13 by hsuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	ft_check(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s;
	size_t	e;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	e = ft_strlen(s1);
	while (s1[s] && ft_check(s1[s], set))
		s++;
	while (e > s && ft_check(s1[e -1], set))
		e--;
	str = (char *)malloc(sizeof(char) * (e - s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s < e)
		str[i++] = s1[s++];
	str[i] = '\0';
	return (str);
}
