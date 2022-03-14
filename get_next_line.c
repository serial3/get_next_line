/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:32:24 by dromao-l          #+#    #+#             */
/*   Updated: 2022/03/14 16:29:32 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_last_index(char *str)
{
	char	*re;
	int		i;

	re = (char *)malloc(sizeof(char));
	if (re == NULL || ft_strlen(str) == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		re = str_catnew(re, str[i]);
		if (str[i] == '\n')
			break ;
		i++;
	}
	return (re);
}

void	newmemstr(char *str)
{
	str = (char *)malloc(sizeof(char));
	str[0] = '\0';
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		temp[BUFFER_SIZE + 1];
	char		*res;
	int			r_count;

	r_count = BUFFER_SIZE;
	newmemstr(str);
	if (str == NULL)
		str = (char *)malloc(sizeof(char));
	if (fd < 0 || BUFFER_SIZE < 0 || str == NULL)
		return (NULL);
	while (!ft_strchr(str, '\n') && r_count == BUFFER_SIZE)
	{
		r_count = read(fd, &temp, BUFFER_SIZE);
		if (r_count == -1)
			return (NULL);
		else if (r_count == 0)
			break ;
		temp[r_count] = '\0';
		str = ft_strjoin(str, temp);
	}
	res = get_last_index(str);
	str += ft_strlen(res);
	return (res);
}
