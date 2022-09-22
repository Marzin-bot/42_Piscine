/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:38:02 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/14 13:25:13 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
*/

int	ft_atoi(char *str)
{
	long	nb;
	int		i;
	int		signe;

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
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (signe % 2)
		nb *= -1;
	return (nb);
}

/*
int main()
{
	char str[] =  "   -+-2147483647hgh98";
	printf("%d\n%d", ft_atoi(str), atoi(str));
}
*/