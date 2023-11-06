/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsuner <hsuner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:54:30 by hsuner            #+#    #+#             */
/*   Updated: 2023/10/31 20:21:31 by hsuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ps_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_ps_atoi_sign(char *str, int *neg)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*neg = -1;
		i++;
	}
	return (i);
}

int	ft_ps_atoi(char *str, t_stack *stack, char **av, int control)
{
	unsigned int		i;
	int					neg;
	unsigned long int	num;

	num = 0;
	neg = 1;
	i = ft_ps_atoi_sign(str, &neg);
	if (!(ft_is_num(str)))
	{
		ft_free_av(av, stack, control);
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_free_av(av, stack, control);
		}
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	if ((num > 2147483648 && neg == -1) || (num > 2147483647 && neg == 1))
		ft_free_av(av, stack, control);
	return (num * neg);
}
