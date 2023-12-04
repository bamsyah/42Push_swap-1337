/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:11:17 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/04 11:59:56 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap_bonus.h"

void	is_digit(char c)
{
	if (!(c >= '0' && c <= '9'))
	{
		ft_printf("Error\n");
		exit (1);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	x;
	int	signe;

	i = 0;
	x = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	while (str[i])
	{
		is_digit(str[i]);
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x * signe);
}
