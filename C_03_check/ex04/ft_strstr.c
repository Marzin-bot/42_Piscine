/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:48:33 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/08 13:26:36 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[nb])
		{
			nb ++;
			if (!to_find[nb])
				return (&str[i - nb + 1]);
		}
		else
			nb = 0;
		i++;
	}
	return (0);
}

/*
int		main()
{
	printf("%s\n", strstr("Samuel", "mue"));
	printf("%s", ft_strstr("Samuel", "mue"));
	return 0;
}*/
