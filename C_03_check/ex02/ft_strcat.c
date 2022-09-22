/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:43:13 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/10 12:09:56 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*
int main()
{
    char src[50], dest[50];

    strcpy(src,  "This is source");
    strcpy(dest, "This is destination");
	printf("%s\n", ft_strcat(dest, src));

    strcpy(src,  "This is source");
    strcpy(dest, "This is destination");
    printf("%s\n", strcat(dest, src));
}*/