/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:25:18 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/14 13:32:34 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff(long unsigned *unb,
	long unsigned size_base, char *base)
{
	long unsigned	nbi;
	char			c;
	int				nb_numero;

	nbi = 0;
	nb_numero = 0;
	while (*unb != 0)
	{
		nbi *= size_base;
		nbi += *unb % size_base;
		*unb /= size_base;
		nb_numero++;
	}
	while (nb_numero)
	{
		c = base[nbi % size_base];
		nbi /= size_base;
		write(1, &c, 1);
		nb_numero--;
	}
}

int	if_char_in_str(char *str, long unsigned max)
{
	long unsigned	i;

	i = 0;
	while (i < max)
	{
		if (str[i] == str[max])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

long unsigned	get_base_size(char *base)
{
	long unsigned	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		if (if_char_in_str(base, i))
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

void	rev(int nb, long unsigned *unb, char *base)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		*unb = (long)nb * -1;
	}
	else
	{
		*unb = nb;
	}
	if (!nb)
	{
		write(1, &base[0], 1);
	}
}

void	ft_putnbr_base(int nb, char *base)
{
	long unsigned		unb;
	long unsigned		size_base;

	size_base = get_base_size(base);
	if (size_base > 1)
	{
		rev(nb, &unb, base);
		aff(&unb, size_base, base);
	}
}

/*
int main()
{
	ft_putnbr_base(255, "0123456789abcdef");
}*/
