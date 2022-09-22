/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:49:19 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/15 12:27:20 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		i;

	if (nb <= 0)
		return (0);
	i = 0;
	while (i <= 46340)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int main()
{
    printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(6));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(1));
}*/