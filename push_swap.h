/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:21:04 by bamsyah           #+#    #+#             */
/*   Updated: 2023/11/23 19:05:36 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "./Utils/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_stack
{
	int	value;
	struct t_stack *next;
} t_stack ;

//-----------------------------------
void	parsing_swap(char *input);
//-----------------------------------
#endif