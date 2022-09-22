/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:14:23 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/08 13:05:07 by smarzin          ###   ########.fr       */
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

void	print_addresse(void *addr)
{
	long unsigned	p;
	int				i;

	p = (long unsigned)addr;
	i = (8 << 3) - 4;
	while (i >= 0)
	{
		print_hex((p >> i) & 0xf);
		i -= 4;
	}
	write(1, ": ", 2);
}

int	print_hex_list(void *addr, unsigned int offset, unsigned int size)
{
	int unsigned	i;
	int				a;
	int				b;
	char			octet;

	i = 0;
	while (i < 16 && i < size - offset)
	{
		octet = *(char *)&addr[i];
		b = octet % 16;
		octet /= 16;
		a = octet % 16;
		print_hex(a);
		print_hex(b);
		if (i % 2)
		{
			write(1, " ", 1);
		}
		i++;
	}
	return (i);
}

void	print_text_memory(void *addr, unsigned int offset, unsigned int size)
{
	int unsigned		i;
	char				octet;

	i = 0;
	while (i < 16 && i < size - offset)
	{
		octet = *(char *)&addr[i];
		if ((octet < '!' || octet > '~') && octet != ' ')
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, &octet, 1);
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				offset_text;

	i = 0;
	while (i < size)
	{
		print_addresse(&addr[i]);
		offset_text = (16 - print_hex_list(&addr[i], i, size)) / 2;
		while (offset_text > 0)
		{
			write(1, "     ", 5);
			offset_text--;
		}
		print_text_memory(&addr[i], i, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

/*
int		main(void)
{
	char	str[] = "Bonjour les aminches\n\n\nc\n est fou\nto
	ut\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n \0";
	ft_print_memory(str, 92);
}*/