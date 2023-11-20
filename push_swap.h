/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsuner <hsuner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:50:46 by hsuner            #+#    #+#             */
/*   Updated: 2023/11/01 03:59:12 by hsuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	char	**av;
}	t_stack;

//checker
int		singular_exec(t_stack *stack, char *instruction, int control);
int		doubles_exec(t_stack *stack, char *instruction);
void	ft_getchecker(t_stack *stack, int control);
void	ft_checker(char **av, int control);
//free_error
void	free_error(t_stack *stack, int num, int control);
void	ft_free_av(char **av, t_stack *stack, int control);
void	ft_error(t_stack *stack);
//get_next_line
char	*get_next_line(int fd);
//push_swap
void	ft_push_swap(char **av, int control);
//quick_sort
int		ft_qs_first_separation(t_stack *stack, int len);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);
//rules_a
void	pa(t_stack *stack, int print);
void	sa(t_stack *stack, int print);
void	ra(t_stack *stack, int print);
void	rra(t_stack *stack, int print);
//rules_b
void	pb(t_stack *stack, int print);
void	sb(t_stack	*stack, int print);
void	rb(t_stack	*stack, int print);
void	rrb(t_stack *stack, int print);
//rules_double
void	ss(t_stack	*stack, int print);
void	rr(t_stack	*stack, int print);
void	rrr(t_stack *stack, int print);
//sort_small_utils
int		ft_push(t_stack *stack, int len, int operation);
int		ft_sort_three(t_stack *s);
void	ft_sort_int_tmp(int *tmp_stack, int size);
int		ft_get_median(int *pivot, int *stack_a, int size);
//sort_small
int		ft_sort_small_a2(t_stack *s);
int		ft_sort_small_a3(t_stack *s, int len);
int		ft_sort_small_b(t_stack *s, int len);
//sources
int		ft_strcmp(char *s1, char *s2);
int		ft_is_num(char *s);
int		ft_is_sorted(int *stack_ab, int size, int flag);
int		ft_sort(t_stack *stack, int size);
void	ft_is_repeat(t_stack *stack, int size, char **av, int control);
//utilities
int		ft_ps_strlen(char **str);
int		ft_ps_atoi_sign(char *str, int *neg);
int		ft_ps_atoi(char *str, t_stack *stack, char **av, int control);

#endif