/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:04:39 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/03 18:54:19 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		b;

	i = 0;
	while (i < size / 2)
	{
		b = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = b;
		i++;
	}
}
/*
int		main(void)
{
	int tab[5] = {0, 1, 2, 3, 4};
    int size = 5;

    ft_rev_int_tab(tab, size);

    for (int i = 0; i < size; i++){
        printf("%d", tab[i]);
    }
}*/