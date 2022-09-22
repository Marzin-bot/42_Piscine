/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:02:26 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/20 13:59:53 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*allocation(int size, char **strs, char *sep)
{
	int		final_size;
	char	*result;
	int		i;

	final_size = 0;
	i = 0;
	while (i < size)
	{
		final_size += ft_strlen(strs[i]);
		i++;
	}
	final_size += ft_strlen(sep) * (size - 1);
	result = malloc(final_size + 1);
	return (result);
}

void	concat(int size, char **strs, char *sep, char *result)
{
	int		final_size;
	int		i;
	int		j;

	final_size = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[final_size] = strs[i][j];
			j++;
			final_size++;
		}
		j = 0;
		while (size - i - 1 && sep[j])
		{
			result[final_size] = sep[j];
			j++;
			final_size++;
		}
		i++;
	}
	result[final_size] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (!size)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
	}
	else
	{
		result = allocation(size, strs, sep);
		if (result)
			concat(size, strs, sep, result);
	}
	return (result);
}

/*
int main()
{
	int size = 3;
	char *strs[3] = {"Un", "petit", "test."};
	char *space = " o ";
	printf("%s\n", ft_strjoin(size, strs, space));
}*/
