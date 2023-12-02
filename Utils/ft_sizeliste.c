/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizeliste.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:07:56 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/02 13:15:39 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sizeliste(t_stack **stack)
{
	t_stack	*temp;
	int		size;

	size = 0;
	temp = *stack;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}