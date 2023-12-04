/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:30:22 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/04 15:56:32 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	int	value;

	value = pop(stack_a);
	if (value == -1)
	{
		ft_printf("Error: stack_a undefined\n");
		exit (1);
	}
	push_begin(stack_b, value);
}
