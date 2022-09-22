/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:51:20 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/20 13:52:32 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

#include <stdlib.h>

int	ft_strchar(char charac, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == charac)
			return (1);
		i++;
	}
	return (0);
}

char	**allocation(char *str, char *charset)
{
	int		i;
	int		n;
	int		start;

	i = 0;
	n = 0;
	start = -1;
	while (str[i])
	{
		if (ft_strchar(str[i], charset))
		{
			if (start + 1 != i)
				n++;
			start = i;
		}
		else if (!str[i + 1] && start + 1 != i)
			n++;
		i++;
	}
	if (start + 1 != i)
		n++;
	return (malloc (sizeof (char *) * (n + 1)));
}

char	*ft_substr(const char *src, int from, int to)
{
	int		len;
	char	*dest;
	int		i;

	len = to - from;
	dest = malloc(sizeof (char) * (len + 1));
	i = from;
	while (i < to && src[i])
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest - len);
}

void	add_char(char *str, char *charset, char **str_dest, int i)
{
	int		k;
	int		start;

	k = 0;
	start = -1;
	while (str[i])
	{
		if (ft_strchar(str[i], charset) || !str[i])
		{
			if (start + 1 != i)
				str_dest[k++] = ft_substr(str, start + 1, i);
			start = i;
		}
		else if (!str[i + 1] && start + 1 != i)
			str_dest[k] = ft_substr(str, start + 1, i + 1);
		i++;
	}
	if (start + 1 != i)
	{
		str_dest[k] = ft_substr(str, start + 1, i);
		k++;
	}
	str_dest[k] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**str_dest;

	str_dest = allocation(str, charset);
	if (str_dest)
		add_char(str, charset, str_dest, 0);
	return (str_dest);
}

/*
int main()
{
	char **split = ft_split("jj//src/user///Documents/file.txt/kl/pppp//", "/p");
	int i = 0;

	while (split[i])
	{
        printf("%s\n", split[i]);
        i++;
    }
	printf("%s\n", split[i]);


	char **split2 = ft_split("aise44nFQdCQaAQjArLO2v4uZU
	bUhS6rt61M daRWSwoRvNHC", "5SUcPg");
	i = 0;

	while (split2[i])
	{
        printf("%s\n", split2[i]);
        i++;
    }
	printf("%s\n", split2[i]);
}*/
