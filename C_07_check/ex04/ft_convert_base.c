/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:58:32 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/21 14:43:34 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

#include <stdlib.h>

int	get_base_size(char *base);
int	get_index_char(char c, char *str, int i);

long	abs_base(long nb, int *nb_numero, char *result, int *i)
{
	if (nb < 0)
	{
		nb *= -1;
		(*nb_numero)++;
		result[*i] = '-';
		(*i)++;
	}
	return (nb);
}

void	decimal_to_base(long nb, char *base, char *result, long nbi)
{
	int		nb_numero;
	int		i;

	nb_numero = 0;
	i = 0;
	nb = abs_base(nb, &nb_numero, result, &i);
	while (nb != 0)
	{
		nbi *= get_base_size(base);
		nbi += nb % get_base_size(base);
		nb /= get_base_size(base);
		nb_numero++;
	}
	while (i < nb_numero)
	{
		result[i] = base[nbi % get_base_size(base)];
		nbi /= get_base_size(base);
		i++;
	}
	result[i] = '\0';
}

int	ft_atoi_base(char *nbr, char *base)
{
	long	nb;
	int		i;
	int		signe;

	i = 0;
	nb = 0;
	signe = 0;
	while (nbr[i] == ' ' || nbr[i] == '\t' || nbr[i] == '\n'
		|| nbr[i] == '\v' || nbr[i] == '\f' || nbr[i] == '\r')
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			signe++;
		i++;
	}
	while (get_index_char(nbr[i], base, 0) != -1)
	{
		nb *= get_base_size(base);
		nb += get_index_char(nbr[i], base, 0);
		i++;
	}
	if (signe % 2)
		nb *= -1;
	return (nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		max;
	int		count;

	if (!get_base_size(base_from) || !get_base_size(base_to))
		return (0);
	max = 1;
	count = 1;
	while (max <= ft_atoi_base(nbr, base_from))
	{
		max *= get_base_size(base_to);
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	if (ft_atoi_base(nbr, base_from))
		decimal_to_base(ft_atoi_base(nbr, base_from), base_to, str, 0);
	else
	{
		str[0] = base_to[0];
		str[1] = '\0';
	}
	return (str);
}

/*
int main()
{
	char str[] =  "  -0000024-lfghf";
	printf("%s\n", ft_convert_base(str, "0123456789", "0123456"));
	char str2[] =  "  -000-lfghf";
	printf("%s", ft_convert_base(str2, "01", "e1234567"));
}*/
