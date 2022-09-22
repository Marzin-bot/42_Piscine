/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:27:14 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/03 17:40:09 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		c;
	int		d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
/*
int		main(void)
{
	int a = 6;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);

	printf("%d\n", a);
	printf("%d", b);
}*/