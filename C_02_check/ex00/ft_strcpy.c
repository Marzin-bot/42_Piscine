/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:20:43 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/08 12:52:59 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
	char original[] = "Copie moi ca";
	char destination[13];

	char *p = ft_strcpy(destination, original);

	printf("%s\n", destination);
	printf("%p\n", destination);
	printf("%p\n\n", p);

	char destination2[13];
	char *q = strcpy(destination2, original);

	printf("%s\n", destination2);
	printf("%p\n", destination2);
	printf("%p\n", q);
}*/