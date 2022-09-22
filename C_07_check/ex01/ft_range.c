/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:58:22 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/16 14:54:44 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*table;

	if (min >= max)
		return (0);
	table = malloc(sizeof(int) * (max - min));
	if (table)
	{
		i = 0;
		while (min + i != max)
		{
			table[i] = min + i;
			i++;
		}
	}
	return (table);
}

/*
int main()
{
	int *g = ft_range(2, 6);
    for (int i = 0; i < 4; i++)
	{
		printf("%d\n", g[i]);
	}
}*/
