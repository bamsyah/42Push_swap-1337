/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:32:27 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/01 19:33:43 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack *stack_b;
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
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	print_list(stack_a);
	ft_printf("====================\n");
	print_list(stack_b);
	ft_printf("********************\n");
	rr(&stack_a, &stack_b);
	print_list(stack_a);
	ft_printf("====================\n");
	print_list(stack_b);
	return (0);
}
