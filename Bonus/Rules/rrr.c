/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:18:08 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/04 12:24:19 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate_stack(stack_a);
	rev_rotate_stack(stack_b);
}