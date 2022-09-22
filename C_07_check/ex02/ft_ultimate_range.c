/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:14:00 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/21 13:57:16 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (range)
	{
		i = 0;
		while (min + i - 1 != max)
		{
			(*range)[i] = min + i;
			i++;
		}
	}
	else
		return (-1);
	return (size);
}

/*
int main()
{
	int *range;
	int n = ft_ultimate_range(&range, 5, 10);

	if (*range)
	{
		for (int i = 0; i < n; i++)
			printf("%d\n", range[i]);
	}
	else
		printf("null");
}*/
