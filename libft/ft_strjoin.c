/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsuner <hsuner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:52:47 by hsuner            #+#    #+#             */
/*   Updated: 2023/10/27 15:01:38 by hsuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = 0;
	return (new);
}
