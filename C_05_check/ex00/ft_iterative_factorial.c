/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:24:35 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/09 12:03:34 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		nbc;

	if (!nb)
	{
		nb = 1;
	}
	else if (nb < 0)
	{
		return (0);
	}
	nbc = nb;
	while (nbc > 1)
	{
		nbc--;
		nb *= nbc;
	}
	return (nb);
}

/*
int main()
{
	printf("%d", ft_iterative_factorial(3));
}*/
