/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsuner <hsuner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:36:02 by hsuner            #+#    #+#             */
/*   Updated: 2023/10/27 15:01:09 by hsuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*final;
	int		i;

	i = 0;
	final = (char *)malloc(ft_strlen(s) + 1);
	if (!final)
		return (0);
	while (*(s + i))
	{
		*(final + i) = *(s + i);
		i++;
	}
	*(final + i) = 0;
	return (final);
}
