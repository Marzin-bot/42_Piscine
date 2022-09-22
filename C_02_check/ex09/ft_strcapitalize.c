/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:44:20 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/14 13:57:48 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_strupcase(char *str, int index)
{
	if ((str[index] < '0' || str[index] > '9'))
	{
		if ((str[index] < 'A' || str[index] > 'Z'))
		{
			str[index] -= 32;
		}
	}
}

void	ft_strlowcase(char *str, int index)
{
	if ((str[index] < '0' || str[index] > '9'))
	{
		if ((str[index] < 'a' || str[index] > 'z'))
		{
			str[index] += 32;
		}
	}
}

void	process2(char *str, int i, int *in_word)
{
	if (!(*in_word))
	{
		ft_strupcase(str, i);
		*in_word = 1;
	}
	else
	{
		ft_strlowcase(str, i);
	}
}

void	process(char *str, int i, int *in_word)
{
	if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
	{
		if (str[i] < '0' || str[i] > '9')
		{
			*in_word = 0;
		}
		else
		{
			process2(str, i, in_word);
		}
	}
	else
	{
		process2(str, i, in_word);
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		in_word;

	in_word = 0;
	i = 0;
	while (str[i])
	{
		process(str, i, &in_word);
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char ch[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *result = ft_strcapitalize(ch);

	printf("%s", result);
}*/