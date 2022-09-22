/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:51:52 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/02 14:55:31 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	bc_c(int a, int b)
{
	int		i;
	char	ch;

	i = b + 1;
	while (i <= 9)
	{
		ch = '0' + a;
		write(1, &ch, 1);
		ch = '0' + b;
		write(1, &ch, 1);
		ch = '0' + i;
		write(1, &ch, 1);
		if (a != 7 || b != 8 || i != 9)
		{
			ch = ',';
			write(1, &ch, 1);
			ch = ' ';
			write(1, &ch, 1);
		}
		i++;
	}
}

void	bc_d(int a)
{
	int		i;

	i = a + 1;
	while (i <= 8)
	{
		bc_c(a, i);
		i++;
	}
}

void	ft_print_comb(void)
{
	int		i;

	i = 0;
	while (i <= 7)
	{
		bc_d(i);
		i++;
	}
}
