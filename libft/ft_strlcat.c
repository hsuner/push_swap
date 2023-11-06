/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsuner <hsuner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:46:18 by hsuner            #+#    #+#             */
/*   Updated: 2023/07/15 17:22:00 by hsuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;
	size_t	j;

	dst_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = dst_size;
	j = 0;
	if (dstsize == 0)
		return (src_size);
	if (dstsize < dst_size)
		return (src_size + dstsize);
	else
	{
		while (src[j] && (dst_size + j) < dstsize)
			dest[i++] = src[j++];
		if ((dst_size + j) == dstsize && dst_size < dstsize)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (src_size + dst_size);
	}
}
