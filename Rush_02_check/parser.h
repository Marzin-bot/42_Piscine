/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:51:48 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/18 17:36:54 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include <stdlib.h>
# include "prototypes.h"

int	ft_nb_lines(char *str)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			nb++;
		i++;
	}
	return (nb);
}

int	parse_key(char *str, int *i, t_dict_item *dict, int size_dict)
{
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		(dict[size_dict].key_len)++;
		(*i)++;
	}
	dict[size_dict].key = &str[*i - dict[size_dict].key_len];
	if (str[*i] == ':')
		(*i)++;
	else
		return (1);
	return (0);
}

int	parse_value(char *str, int *i, t_dict_item *dict, int size_dict)
{
	while (str[*i] == ' ')
		(*i)++;
	while (str[*i] >= ' ' && str[*i] <= '~')
	{
		(dict[size_dict].value_len)++;
		(*i)++;
	}
	dict[size_dict].value = &str[*i - dict[size_dict].value_len];
	if (str[*i] == '\n')
		(*i)++;
	else
		return (1);
	return (0);
}

t_dict_item	*parser(char *str, int *size_dict)
{
	t_dict_item		*dict;
	int				i;

	dict = malloc(sizeof(t_dict_item) * ft_nb_lines(str));
	if (dict)
	{		
		*size_dict = 0;
		i = 0;
		while (str[i])
		{
			dict[*size_dict].key_len = 0;
			dict[*size_dict].value_len = 0;
			if (parse_key(str, &i, dict, *size_dict))
				return (0);
			if (parse_value(str, &i, dict, *size_dict))
				return (0);
			(*size_dict)++;
		}
	}
	else
		return (0);
	return (dict);
}

#endif
