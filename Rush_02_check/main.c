/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:01:22 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/18 17:45:58 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "prototypes.h"
#include "open_file.h"
#include "parser.h"
#include "algo.h"

int	main(int argc, char *argv[])
{
	t_dict_item		*dict;
	int				size_dict;
	char			*buffer_file;

	if (argc == 2)
	{
		buffer_file = ft_open_file("numbers.dict");
		if (buffer_file)
		{
			dict = parser(buffer_file, &size_dict);
			if (dict)
			{
				algo(argv[1], dict);
				free(dict);
			}
			else
				write(1, "Dict Error", sizeof("Dict Error"));
			free(buffer_file);
		}
		else
		{
			write(1, "Dict Error", sizeof("Dict Error"));
		}
	}
	write(1, "\n", 1);
}
