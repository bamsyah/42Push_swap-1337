/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:12:38 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/04 12:36:39 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	print_list(t_stack *list)
{
	t_stack	*curr;

	curr = list;
	while (curr)
	{
		printf("[%d]", curr->value);
		curr = curr->next;
	}
	printf("\n");
}

void	moves_checker(t_stack **stack_a, t_stack **stack_b, char *str)
{
	if (!ft_strcmp(str, "sa\n"))
		sa(stack_a);
	else if (!ft_strcmp(str, "sb\n"))
		sb(stack_b);
	else if (!ft_strcmp(str, "ss\n"))
		ss(stack_a, stack_b);
	else if (!ft_strcmp(str, "pa\n"))
		pa(stack_a, stack_b);
	else if (!ft_strcmp(str, "pb\n"))
		pb(stack_a, stack_b);
	else if (!ft_strcmp(str, "ra\n"))
		ra(stack_a);
	else if (!ft_strcmp(str, "rb\n"))
		rb(stack_b);
	else if (!ft_strcmp(str, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(str, "rra\n"))
		rra(stack_a);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(stack_b);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(stack_a, stack_b);
	else
		error();
}

void	read_input(t_stack **stack_a, t_stack **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!str)
			return ;
		moves_checker(stack_a, stack_b, str);
		free(str);
		str = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		loop;
	int		check;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit(1);
	loop = 0;
	while (++loop < ac)
	{
		check = ft_atoi(av[loop]);
		check_dup(stack_a, check);
		push_end(&stack_a, ft_atoi(av[loop]));
	}
	algorithm(&stack_a, &stack_b);
	read_input(&stack_a, &stack_b);
	if (ft_sorted(stack_a) && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_list(&stack_a);
	return (0);
}