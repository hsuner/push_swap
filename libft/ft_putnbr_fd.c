/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsuner <hsuner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:44:15 by hsuner            #+#    #+#             */
/*   Updated: 2023/07/15 17:24:48 by hsuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	number;

	number = (long)nb;
	if (number < 0)
	{
		write(fd, "-", 1);
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd(number % 10 + 48, fd);
	}
	else
		ft_putchar_fd(number + '0', fd);
}
