/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:37:55 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/08 12:58:40 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int unsigned	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	char original[] = "Copie moi ca!";
	int size = 16;
	char destination[size];
	
	char *p = ft_strncpy(destination, original, size);
	printf("%p\n", p);
	printf("%p\n", destination);
	printf("%s\n", destination);
	for (int i = 0; i < size; i++){
		if (destination[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", destination[i]);
		}
	}
	printf("\n\n\n");

	char destination2[size];
	
	char *q = strncpy(destination2, original, size);
	printf("%p\n", q);
	printf("%p\n", destination2);
	printf("%s\n", destination2);
	for (int i = 0; i < size; i++){
		if (destination2[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", destination2[i]);
		}
	}
}*/
