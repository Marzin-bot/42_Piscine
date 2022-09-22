/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:00:38 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/10 12:22:38 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int unsigned	j;
	int unsigned	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
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
    int n = 15;

    strcpy(src,  "This is source");
    strcpy(dest, "This is destination");
	printf("%s\n", ft_strncat(dest, src, n));

    strcpy(src,  "This is source");
    strcpy(dest, "This is destination");
    printf("%s\n", strncat(dest, src, n));
}*/