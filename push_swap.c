/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:32:27 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/04 16:15:34 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **str)
{
	int	loop;

	loop = -1;
	while (str[++loop])
		free(str[loop]);
	free(str);
}

void	print_list(t_stack *list)
{
	t_stack	*curr;

	curr = list;
	while (curr)
	{
		printf("[%d]", curr->value);
		curr = curr->next;
	}
	printf("\n");
}

void	check_args(int ac, char **av, t_stack **stack_a)
{
	char	**split;
	int		loop;
	int		check;
	int		count;

	loop = 0;
	while (++loop < ac)
	{
		split = ft_split(av[loop], ' ');
		count = 0;
		while (count < ft_strlen_d(split))
		{
			check = ft_atoi(split[count]);
			check_dup(*stack_a, check);
			push_end(stack_a, ft_atoi(split[count]));
			count++;
		}
		free_split(split);
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac >= 2)
	{
		check_args(ac, av, &stack_a);
		print_list(stack_a);
		algorithm(&stack_a, &stack_b);
		print_list(stack_a);
		free_list(&stack_a);
	}
	// system("leaks push_swap");
	return (0);
}
