/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:23:42 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/21 13:15:47 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int unsigned	i;
	char			*strc;

	strc = malloc(sizeof (char) * (ft_strlen(src) + 1));
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*result;

	result = malloc(sizeof (t_stock_str) * (ac + 1));
	if (result)
	{
		i = 0;
		while (i < ac)
		{
			result[i].str = av[i];
			result[i].size = ft_strlen(av[i]);
			result[i].copy = ft_strdup(av[i]);
			i++;
		}
		result[i].str = 0;
	}
	return (result);
}
