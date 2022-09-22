/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:53:00 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/15 12:19:38 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		i;
	long	nbc;

	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	nbc = nb;
	i = 0;
	while (i < power - 1)
	{
		nb *= nbc;
		i++;
	}
	return (nb);
}

/*
int main()
{
	printf("%d\n", ft_iterative_power(4, 0));
	printf("%d\n", ft_iterative_power(-4, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(4, 4));
	printf("%d\n", ft_iterative_power(4, -4));
	printf("%d\n", ft_iterative_power(-4, 4));
	printf("%d\n", ft_iterative_power(-4, 10));
	printf("%d\n", ft_iterative_power(-2581, 0));
	printf("%d\n", ft_iterative_power(-4, -4));
}*/