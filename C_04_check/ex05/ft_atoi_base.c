/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:41:12 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/14 13:24:00 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
*/

int	get_index_char(char c, char *str, int i)
{
	while (str[i])
	{
		if (str[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	get_size_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
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
	if (i <= 1)
	{
		i = 0;
	}
	return (i);
}

void	calcule(long *nb, char *str, char *base, int *i)
{
	while (get_index_char(str[*i], base, 0) != -1)
	{
		*nb *= get_base_size(base);
		*nb += get_index_char(str[*i], base, 0);
		(*i)++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	long	nb;
	int		i;
	int		signe;
	int		nb_base;

	nb_base = get_base_size(base);
	if (!nb_base)
		return (0);
	i = 0;
	nb = 0;
	signe = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	calcule(&nb, str, base, &i);
	if (signe % 2)
		nb *= -1;
	return (nb);
}

/*
int main()
{
	char str[] =  "  --+++++-----7fffffff-lfghf";
	printf("%d\n%d", ft_atoi_base(str, "0123456789abcdef"), atoi(str));
}*/
