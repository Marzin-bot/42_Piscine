/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:20:51 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/12 17:21:01 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

unsigned int	str_len(char *str)
{
	int unsigned	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int unsigned	i;
	int unsigned	l;
	int unsigned	e;

	l = str_len(dest);
	e = str_len(src);
	i = 0;
	while (src[i] && size && i + l < size - 1)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	if (i + l < size)
	{
		size -= size - l;
	}
	return (e + size);
}

/*
int main()
{
	char dst[100] = "445iiii";
	char src[100] = "2kll";
	unsigned int size = 1;
	printf("%lu  %s\n", strlcat(dst, src, size), dst);

	char dst2[100] = "445iiii";
	printf("%u  %s\n", ft_strlcat(dst2, src, size), dst2);
}*/