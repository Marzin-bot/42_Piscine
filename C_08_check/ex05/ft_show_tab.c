/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:20:25 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/21 13:11:58 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_print_nb(int nb, long nbi)
{
	int		nb_numero;
	char	char_nb;
	int		i;

	nb_numero = 0;
	i = 0;
	if (nb)
	{
		while (nb != 0)
		{
			nbi *= 10;
			nbi += nb % 10;
			nb /= 10;
			nb_numero++;
		}
		while (i < nb_numero)
		{
			char_nb = nbi % 10 + '0';
			write(1, &char_nb, 1);
			nbi /= 10;
			i++;
		}
	}
	else
		write(1, "0", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_print_nb(par[i].size, 0);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}

/*
int main()
{
	char *test[3] = {"4534534534534534", "test", "un autre"};
	struct s_stock_str	*result = ft_strs_to_tab(3, test);
	ft_show_tab(result);
}*/