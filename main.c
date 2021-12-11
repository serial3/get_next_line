/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:34:19 by dromao-l          #+#    #+#             */
/*   Updated: 2021/12/11 08:56:08 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*line;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("Error reading: ");
			ft_putstr(av[1]);
			ft_putstr("\n");
			return (-1);
		}
		line = get_next_line(fd);
		while (line != NULL)
		{
			ft_putstr(">>>");
			ft_putstr(line);
			line = get_next_line (fd);
		}
	}
	else
		ft_putstr("Error\n");
	return (0);
}
