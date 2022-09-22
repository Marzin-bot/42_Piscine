/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:12:18 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/18 14:40:47 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	rev_str_in_tab(char **tab, int a, int b)
{
	char	*temp;

	temp = tab[a];
	tab[a] = tab[b];
	tab[b] = temp;
}

void	sort(char *table[], int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size - 1)
		{
			if (ft_strcmp(table[i + 1], table[j + 1]) > 0)
				rev_str_in_tab(table, i + 1, j + 1);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	sort(argv, argc);
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i + 1][j])
		{
			write(1, &(argv[i + 1][j]), 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
