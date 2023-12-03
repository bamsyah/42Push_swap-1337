/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:59:07 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/03 15:17:19 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algorithm(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	(void)stack_b;
	size = ft_sizeliste(stack_a);
	if (!ft_sorted(stack_a))
		return ;
	if (size <= 3)
		sort_3(stack_a);
	else if (size <= 5)
		sort_5(stack_a, stack_b);
	else if (size <= 100)
		sort_up_5(stack_a, stack_b, 13);
}
