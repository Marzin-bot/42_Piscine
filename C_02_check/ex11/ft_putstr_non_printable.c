/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:26:03 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/08 13:03:32 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int n)
{
	char	c;

	if (n <= 9)
	{
		c = '0' + n;
	}
	else
	{
		c = 'a' + n - 10;
	}
	write(1, &c, 1);
}

void	extract_hex_numbers(char c)
{
	int		a;
	int		b;

	write(1, "\\", 1);
	b = c % 16;
	c /= 16;
	a = c % 16;
	print_hex(a);
	print_hex(b);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			extract_hex_numbers(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*
int main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
*/