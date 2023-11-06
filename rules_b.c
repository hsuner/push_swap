/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsuner <hsuner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:54:19 by hsuner            #+#    #+#             */
/*   Updated: 2023/11/02 16:48:28 by hsuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	pb(t_stack *s, int print)
{
	int	i;

	if (s->size_a)
	{
		s->size_b++;
		i = s->size_b;
		while (--i > 0)
			s->b[i] = s->b[i - 1];
		s->b[0] = s->a[0];
		i = -1;
		s->size_a--;
		while (++i < s->size_a)
			s->a[i] = s->a[i + 1];
		if (!print)
			write(1, "pb\n", 3);
	}
}

void	sb(t_stack	*s, int print)
{
	int	tmp;

	if (s->size_b < 2)
		return ;
	tmp = s->b[0];
	s->b[0] = s->b[1];
	s->b[1] = tmp;
	if (!print)
		write(1, "sb\n", 3);
}

void	rb(t_stack	*s, int print)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = s->b[i];
	i++;
	while (i < s->size_b)
	{
		s->b[i - 1] = s->b[i];
		i++;
	}
	s->b[i - 1] = tmp;
	if (!print)
		write(1, "rb\n", 3);
}

void	rrb(t_stack *s, int print)
{
	int	tmp;
	int	i;

	if (s->size_b > 0)
	{
		i = s->size_b - 1;
		tmp = s->b[i];
		while (i)
		{
			s->b[i] = s->b[i - 1];
			i--;
		}
		s->b[i] = tmp;
		if (!print)
			write(1, "rrb\n", 4);
	}
}
