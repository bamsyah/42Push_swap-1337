/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:04:28 by bamsyah           #+#    #+#             */
/*   Updated: 2023/12/03 14:05:15 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_putchar_len(char c);
int		ft_printf(const char *str, ...);
int		ft_putstr_len(char *str);
void	ft_putnbr_len(int nbr, int *len);
void	ft_putunbr_len(unsigned int nbr, int *len);
void	ft_putbase(unsigned long i, char *s, int *len);

#endif
