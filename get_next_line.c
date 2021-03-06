/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:32:24 by dromao-l          #+#    #+#             */
/*   Updated: 2022/03/18 20:28:42 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	str[BUFFER_SIZE];
	char		*res;
	int			r_count;

	res = 0;
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	while (1)
	{
		r_count = 1;
		if (!str[0])
			r_count = read(fd, str, BUFFER_SIZE);
		if (r_count > 0)
			res = ft_strjoin(res, str);
		if (r_count <= 0 || buff_check(str))
			break ;
	}
	return (res);
}
