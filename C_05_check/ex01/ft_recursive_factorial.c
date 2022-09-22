/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:34:08 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/07 18:53:38 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
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
	if (nb > 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

/*
int main()
{
	printf("%d", ft_recursive_factorial(5));
}*/