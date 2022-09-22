/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:01:55 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/18 17:44:03 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_H
# define PRINTER_H

# include <unistd.h>
# include "prototypes.h"

// Affiche les unites (nb entre 0 et 9).
void	print_unite(int nb, t_dict_item *dict)
{
	if (nb)
		write(1, dict[nb].value, dict[nb].value_len);
}

// Affiche les dizaines, les unite (nb entre 0 et 99).
void	print_dizaine(int nb, t_dict_item *dict)
{
	int	nb_diz;

	nb_diz = nb / 10;
	if (nb_diz)
	{
		if (nb <= 20)
			write(1, dict[nb].value, dict[nb].value_len);
		else
		{
			write(1, dict[nb_diz + 18].value, dict[nb_diz + 18].value_len);
			nb %= 10;
			if (nb)
			{
				write(1, " ", 1);
				print_unite(nb, dict);
			}
		}
	}
	else
	{
		print_unite(nb, dict);
	}
}

// Affiche les centaines, les dizaines, et les unite (nb entre 0 et 999).
void	print_centaine(int nb, t_dict_item *dict)
{
	int	nb_centaine;

	nb_centaine = nb / 100;
	if (nb_centaine)
	{
		write(1, dict[nb_centaine].value, dict[nb_centaine].value_len);
		write(1, " ", 1);
		write(1, dict[28].value, dict[28].value_len);
		nb %= 100;
		if (nb)
			write(1, " ", 1);
	}
	if (nb)
		print_dizaine(nb, dict);
}

#endif