/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:39:47 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/20 12:32:15 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_index_char(char c, char *str, int i)
{
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	get_base_size(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || base[i] == '\t' || base[i] == '\n'
			|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r'
			|| get_index_char(base[i], base, i + 1) != -1)
		{
			return (0);
		}
		i++;
	}
	if (i == 1)
		i = 0;
	return (i);
}
