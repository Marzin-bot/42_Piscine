/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarzin <smarzin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:36:53 by smarzin           #+#    #+#             */
/*   Updated: 2022/09/18 17:05:39 by smarzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPEN_FILE_H
# define OPEN_FILE_H

# include <fcntl.h>
# include <stdlib.h>

char	*ft_open_file(char *path)
{
	int		descriptor_file;
	int		len_buffer;
	char	*buffer;

	buffer = malloc(sizeof(char) * 10000);
	if (buffer)
	{
		descriptor_file = open(path, 0);
		if (descriptor_file == -1)
			return (0);
		len_buffer = read(descriptor_file, buffer, 10000);
		if (len_buffer == -1)
			return (0);
		close(descriptor_file);
	}
	return (buffer);
}

#endif