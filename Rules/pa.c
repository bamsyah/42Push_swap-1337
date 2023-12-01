/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:20:57 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/01 16:32:43 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
