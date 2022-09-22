/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:59:30 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/14 13:24:39 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff(long unsigned *unb, long unsigned *nbi)
{
	char	c;
	int		nb_numero;

	nb_numero = 0;
	while (*unb != 0)
	{
		*nbi *= 10;
		*nbi += *unb % 10;
		*unb /= 10;
		nb_numero++;
	}
	while (nb_numero)
	{
		c = '0' + *nbi % 10;
		*nbi /= 10;
		write(1, &c, 1);
		nb_numero--;
	}
}

void	ft_putnbr(int nb)
{
	long unsigned		unb;
	long unsigned		nbi;

	nbi = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		unb = (long)nb * -1;
	}
	else
	{
		unb = nb;
	}
	if (!nb)
	{
		write(1, "0", 1);
	}
	aff(&unb, &nbi);
}

/*
int main()
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(10);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(-4);
}*/
