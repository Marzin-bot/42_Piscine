/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:13:07 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/16 12:15:21 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;

	i = 0;
	while (argv[argc / argc - 1][i])
	{
		write(1, &(argv[0][i]), 1);
		i++;
	}
	write(1, "\n", 1);
}
