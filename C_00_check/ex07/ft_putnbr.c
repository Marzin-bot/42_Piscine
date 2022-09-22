/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:59:47 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/06 14:34:39 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff(long unsigned nbi)
{
	char	c;

	while (nbi > 0)
	{
		c = '0' + nbi % 10;
		nbi /= 10;
		write(1, &c, 1);
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
	while (unb != 0)
	{
		nbi *= 10;
		nbi += unb % 10;
		unb /= 10;
	}
	aff(nbi);
}

/*
int main()
{
	ft_putnbr(-2147483648);
}*/
