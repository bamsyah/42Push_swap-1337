/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:11:17 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/05 00:12:54 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap_bonus.h"

static int	ft_iswspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

static void	ft_isinrange(int result, char c, int sign)
{
	if (sign == 1)
		if (result > (INT_MAX - (c - '0')) / 10)
		{
			ft_printf("Error\n");
			exit (1);
		}
	if (sign == -1)
		if (result > (2147483648 - (c - '0')) / 10)
		{
			ft_printf("Error\n");
			exit (1);
		}
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_iswspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		exit (1);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			exit (1);
		ft_isinrange(result, str[i], sign);
		result = result * 10 + str[i++] - '0';
	}
	return (result * sign);
}
