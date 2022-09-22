/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:02:27 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/03 16:15:48 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include  <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main(void)
{
	int		o = 4;
	int 	a = 8;

	ft_swap(&o, &a);

	printf("%d", o);
	printf("%d", a);	
}*/
