/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:57:54 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/19 15:51:37 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int unsigned	ln;
	int unsigned	i;
	char			*strc;

	ln = 0;
	while (src[ln])
		ln ++;
	strc = malloc(ln + 1);
	if (strc)
	{
		i = 0;
		while (src[i])
		{
			strc[i] = src[i];
			i++;
		}
		strc[i] = '\0';
	}
	return (strc);
}

/*
int main()
{
	printf("%s", ft_strdup("test"));
}*/
