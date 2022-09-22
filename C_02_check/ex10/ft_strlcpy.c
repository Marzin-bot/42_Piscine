/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:35:51 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/08 13:00:52 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < size)
		{
			dest[i] = src[i];
		}
		i++;
	}
	if (size)
	{
		dest[size - 1] = '\0';
	}
	return (i);
}

/*
int     main() 
{
    char original[] = "Copie moi ca!\0";
	int size = 2;
	char destination[size];
	
	int p = ft_strlcpy(destination, original, size);
    printf("%d\n", p);
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

    printf("\n\n");
    
	char destination2[size];
	int o = strlcpy(destination2, original, size);
    printf("%d\n", o);
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
}
*/
