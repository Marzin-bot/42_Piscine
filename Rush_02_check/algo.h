/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:11:00 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/18 18:22:26 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H

# include <unistd.h>
# include "prototypes.h"
# include "printer.h"

void	ft_calcule(char **str_nb, t_dict_item *dict, int n, int u)
{
	int		i;
	int		nb;

	nb = atoi_to_r(*str_nb, n);
	i = 0;
	while (*str_nb && i < n)
	{
		(*str_nb)++;
		i++;
	}
	if (nb)
	{
		print_centaine(nb, dict);
		if (u >= 1)
		{
			write(1, " ", 1);
			write(1, dict[u + 28].value, dict[u + 28].value_len);
			write(1, " ", 1);
		}
	}
}

// on ignore les espaces, les plus, les zeros dans le debut du nombre.
void	atoi_str(char **str)
{
	while (**str == ' ' || **str == '\t' || **str == '\n'
		|| **str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
	while (**str == '+')
		(*str)++;
	while (**str == '0')
		(*str)++;
}

// Renvoi 1 si la str contien au moins un numero.
int	verif(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

void	algo(char *str_nb, t_dict_item *dict)
{
	int		str_nb_len;
	int		u;
	int		rest;

	if (verif(str_nb))
	{
		atoi_str(&str_nb);
		str_nb_len = ft_strlen(str_nb);
		u = str_nb_len / 3;
		rest = str_nb_len % 3;
		if (rest)
			ft_calcule(&str_nb, dict, rest, u);
		while (u)
		{
			u--;
			ft_calcule(&str_nb, dict, 3, u);
		}
		if (!str_nb_len)
			write(1, dict[0].value, dict[0].value_len);
	}
	else
		write(1, "Error", sizeof("Error"));
}

#endif