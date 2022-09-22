/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:05:28 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/15 12:46:05 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	rev_int_in_tab(int *tab, int a, int b)
{
	int		c;

	c = tab[a];
	tab[a] = tab[b];
	tab[b] = c;
}

int	min_in_range(int *tab, int start, int size)
{
	int		min;
	int		i;
	int		result;

	result = 0;
	min = 2147483647;
	i = 0;
	while (i < size - start)
	{
		if (tab[i + start] < min)
		{
			result = i + start;
			min = tab[result];
		}
		i++;
	}
	return (result);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		min_index;

	i = 0;
	while (i < size)
	{
		min_index = min_in_range(tab, i, size);
		rev_int_in_tab(tab, i, min_index);
		i++;
	}
}
/*
int		main(void)
{
	int size = 7;
	int tab[7] = {1, 6, 0, 1, 4, 3, 2};

    ft_sort_int_tab(tab, size);

    for (int i = 0; i < size; i++){
        printf("%d\n", tab[i]);
    }
}*/