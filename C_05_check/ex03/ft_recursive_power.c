/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:54:16 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/15 12:19:41 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int		nbc;

	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	nbc = nb;
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int main()
{
	printf("%d\n", ft_recursive_power(4, 0));
	printf("%d\n", ft_recursive_power(-4, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(4, 4));
	printf("%d\n", ft_recursive_power(4, -4));
	printf("%d\n", ft_recursive_power(-4, 4));
	printf("%d\n", ft_recursive_power(-4, -4));
}*/