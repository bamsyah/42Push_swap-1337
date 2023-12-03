/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:08:24 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/03 19:27:12 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_stack(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!(*stack) || !(*stack)->next)
	{
		ft_printf("Error: missing element\n");
		return ;
	}
	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	rotate_stack(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!(*stack) || !(*stack)->next)
	{
		ft_printf("Error: missing element\n");
		return ;
	}
	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	*stack = first->next;
	first->next = NULL;
}

void	rev_rotate_stack(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*head;

	if (!(*stack) || !(*stack)->next)
	{
		ft_printf("Error: missing element\n");
		return ;
	}
	first = *stack;
	last = *stack;
	while (last->next->next)
		last = last->next;
	head = last->next;
	last->next = NULL;
	*stack = head;
	head->next = first;
}
