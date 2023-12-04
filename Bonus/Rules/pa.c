/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:20:57 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/04 15:56:29 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	int	value;

	value = pop(stack_b);
	if (value == -1)
	{
		ft_printf("Error: stack_b undefined\n");
		exit (1);
	}
	push_begin(stack_a, value);
}
