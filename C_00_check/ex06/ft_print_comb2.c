/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:11:54 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/03 12:57:36 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	operate(int a, int b)
{
	char	ch;

	ch = '0' + a / 10;
	write(1, &ch, 1);
	ch = '0' + a % 10;
	write(1, &ch, 1);
	ch = ' ';
	write(1, &ch, 1);
	ch = '0' + b / 10;
	write(1, &ch, 1);
	ch = '0' + b % 10;
	write(1, &ch, 1);
}

void	verif(int a, int b)
{
	char	ch;

	if (a != 98 || b != 99)
	{
		ch = ',';
		write(1, &ch, 1);
		ch = ' ';
		write(1, &ch, 1);
	}
}

void	bc_b(int a)
{
	int		i;
	char	ch;

	i = a + 1;
	while (i <= 99)
	{
		operate(a, i);
		verif(a, i);
		i++;
	}
}

void	ft_print_comb2(void)
{
	int		i;

	i = 0;
	while (i <= 98)
	{
		bc_b(i);
		i++;
	}
}
