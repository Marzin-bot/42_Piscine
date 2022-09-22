/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:18:46 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/22 12:57:15 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

typedef struct dict_item
{
	char	*key;
	int		key_len;
	char	*value;
	int		value_len;
}	t_dict_item;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	atoi_to_r(char *str, int n)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	while (str[i] && i < n)
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb);
}

#endif